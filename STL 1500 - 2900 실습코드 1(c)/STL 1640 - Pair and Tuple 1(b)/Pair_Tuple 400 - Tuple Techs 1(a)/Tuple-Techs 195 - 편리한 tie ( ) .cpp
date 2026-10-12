#include <bits/stdc++.h>
using namespace std;


int main() {
  pair  < int, int> X ;
  tuple < int, int, int, int > Y ;
  int myint;
  char mychar;

  tuple<int,float,char> mytuple;

  mytuple = make_tuple (10, 2.6, 'a');          // packing values into tuple

  tie (myint, ignore, mychar) = mytuple;   // unpacking tuple into variables

  cout << "myint = " << myint << '\n';
  cout << "mychar = " << mychar << '\n';

  return 0;

} // end of main()
