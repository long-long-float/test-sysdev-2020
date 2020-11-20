#!/bin/sh -x

g++ --std=c++11 -o test test.cpp
result=$(./test 2>&1)
if [ $? -eq 0 ]; then
  body="<div style=\"color: green\">Test succeed!</div>"
else
  body="<div style=\"color: red\">Test fail.</div><br>$result"
fi
cat <<EOS > result.html
<!doctype html>

<html lang="en">
<head>
  <meta charset="utf-8">

  <title>The test result of vector_sum</title>
</head>
<body>
  $body
</body>
</html>
EOS

target_branch="gh-page"
git config --global user.name "CircleCI"
git config --global user.email "<>"
git checkout $target_branch
git reset --hard origin/main

#echo $result_html > result.html
git add result.html
git commit -m "[skip ci] updates the test result of vector_sum"
if [ $? -ne 0 ]; then
  echo "nothing to commit"
  exit 0
fi
git remote set-url origin "git@github.com:long-long-float/test-sysdev-2020"
ssh -oStrictHostKeyChecking=no github.com # To skip asking of ssh
git push -f origin $target_branch 
