// example about structures
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std ;


class Test1 {
    int x ; // x is private
};

struct Test2 {
    int x ; // x is public
};

class Test3 {
    public : int x ; // x is private
};


int main() {

  Test1 t1;
  Test2 t2;
  Test3 t3;
//  t1.x = 20; // compiler error because x is private
  t2.x = 450 ;
  t3.x = 780 ;
//  cout << "\n t1.x = " << t1.x << endl ;
  cout << "\n t2.x = " << t2.x << endl ;
  cout << "\n t3.x = " << t3.x << endl ;
  getchar();
  return 0;
}
