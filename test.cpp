#include <iostream>
#include <string.h>
using namespace std;

class Foo {
public:
  int n;
  void display() {
    cout << "n = " << n << endl;
  }
};

int main(int argc, char** argv) {
  int ary[] = {1, 2, 3, 4};
  int x;

  Foo *foo = NULL;
  foo->display();


  return 0;
}
