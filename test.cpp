#include <iostream>
#include <vector>
#include <cassert>

#include "./vector_sum.h"

using namespace std;

int main(int argc, char** argv) {
  vector<int> ary {1, 2, 3, 4};

  assert(sum(ary) == 10);

  return 0;
}
