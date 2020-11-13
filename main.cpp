#include <vector>
#include <string>
#include <iostream>

#include "./vector_sum.h"

using namespace std;

int main(int argc, char** argv) {
  vector<int> nums;

  for (int i = 1; i < argc; i++) {
    try {
      nums.push_back(stoi(string(argv[i])));
    }
    catch (const exception &ex) {
      // Don't add to nums for an invalid number
    }
  }

  cout << sum(nums) << endl;

  return 0;
}
