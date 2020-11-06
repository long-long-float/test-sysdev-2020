#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
  int ary[] = {1, 2, 3, 4};

  for (int i = 0; i < argc; i++) {
    cout << i << ": " << argv[i] << endl;
  }

  return 0;
}
