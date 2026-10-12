#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

class Base {
  public:  int x;
};

class  Derived1 : Base { }; // is equilalent to class Derived : private Base {}
struct Derived2 : Base { }; // is equilalent to struct Derived : public Base {}

int main() {
    Derived1 d1;
    Derived2 d2;
 //   d1.x = 20;      // compiler error becuase inheritance is private
    d2.x = 60;      // works fine becuase inheritance is public

//    cout << "\n d1.x = " << d1.x << endl ;
    cout << "\n d2.x = " << d1.x << endl ;
    getchar();
    return 0;
}


