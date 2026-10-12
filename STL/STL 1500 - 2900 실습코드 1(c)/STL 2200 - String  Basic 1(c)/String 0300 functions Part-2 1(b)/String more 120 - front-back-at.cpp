#include <bits/stdc++.h>
using namespace std;


int main () {

  string str ("Busan Seagull");
  str.front() = 'T';
  cout << str << '\n';

  str.back() = '?' ;
  cout << str << '\n';

  for (unsigned i=0; i<str.length(); ++i) {
    cout << str.at(i) << " - " ;
  }
  return 0;

}
