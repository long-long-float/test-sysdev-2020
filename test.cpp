#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
  int ary[] = {1, 2, 3, 4};

  int i = 0;
  for (auto &e : ary) {
    cout << i << ": " << e << endl;
    i++;
  }

  return 0;
}
