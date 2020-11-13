#include <iostream>
#include <vector>
#include <cassert>

#include "./vector_sum.h"

using namespace std;

int main(int argc, char** argv) {
  vector<int> ary1 {1, 2, 3, 4};
  assert(sum(ary1) == 10);

  vector<int> ary2 {1, 2, 3, 4, -10};
  assert(sum(ary2) == 10);

  return 0;
}
