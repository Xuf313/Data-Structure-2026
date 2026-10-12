#include <bits/stdc++.h>
using namespace std;



int main () {

  string str ("hello world");
  str.back() = '!';
  cout << "str = " << str << '\n';

  str.back() = '#';
  cout << "str = " << str << '\n';
  return 0;
}
