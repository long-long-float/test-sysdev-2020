#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
  int ary[] = {1, 2, 3, 4};

  for (auto &e : ary) {
    cout << e << endl;
  }

  return 0;
}
