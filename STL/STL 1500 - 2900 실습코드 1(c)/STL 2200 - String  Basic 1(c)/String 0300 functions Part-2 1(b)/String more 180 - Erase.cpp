#include <bits/stdc++.h>
using namespace std;

int main () {

  string str ("This is an example sentence.");
  cout << "0. " << str << '\n';
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  cout << "1. " << str << '\n';
                                                // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  cout << "2. " << str << '\n';
                                            // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  cout << "3. " << str << '\n';
                                           // "This sentence."
  return 0;
}
