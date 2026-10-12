// pair::operator= example
#include <bits/stdc++.h>
using namespace std ;

int main () {
  pair <string,int> planet, homeplanet;

  planet = make_pair("XEarth",6371);

  homeplanet = planet;

  cout << "Home planet: " << homeplanet.first << '\n';
  cout << "Planet size: " << homeplanet.second << '\n';
  return 0;
}
