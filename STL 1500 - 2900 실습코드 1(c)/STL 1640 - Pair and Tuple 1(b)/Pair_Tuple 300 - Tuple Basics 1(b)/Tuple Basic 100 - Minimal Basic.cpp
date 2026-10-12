#include <iostream>     //cout
#include <tuple>        //tuple,get,tie,ignore
using namespace std ;

int main () {

 tuple <int,char> foo (10,'x');
 auto bar = make_tuple ("test", 3.1, 14, 'y');

 get<2>(bar) = 100;                                    // access element

 int myint; char mychar;

 tie (myint, mychar) = foo;                 // unpack elements
 tie (ignore,ignore, myint, mychar) = bar;  // unpack (with ignore)

 mychar =get<3>(bar);

 get<0>(foo) =get<2>(bar);
 get<1>(foo) = mychar;

 cout << "foo contains: ";
 cout << get<0>(foo) << ' ';
 cout << get<1>(foo) << '\n';

  return 0;
}
