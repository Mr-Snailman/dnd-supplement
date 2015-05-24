#include "Hello.h"
#include <iostream>

using namespace std;

Hello::Hello(const char* who) {
  this->who = who;
}

void Hello::sayHello(unsigned n) {
  for (unsigned i=0; i < n; i++) {
    cout << (i+1) << ".\tHello " << who << endl;
  }
}
