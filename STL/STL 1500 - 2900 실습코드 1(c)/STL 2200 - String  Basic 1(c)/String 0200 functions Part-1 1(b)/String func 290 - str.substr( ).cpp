#include <bits/stdc++.h>
using namespace std;

int main () {

  string str="We think in generalities, but we live in details.";

  string str2 = str.substr (3,5);     // "think"
  cout << "\n 1: " << str2 << '\n' ;

  size_t pos = str.find("live");      // position of "live" in str
  string str3 = str.substr (pos);     // get from "live" to the end
  cout << "\n 2: " << str3 << '\n';

  return 0;
}

