#include <bits/stdc++.h>
using namespace std;

int main () {
  tuple <string, float , string,int> planet, homeplanet;
  string w ;
  planet = make_tuple("Punch", 34.67, "Earth",6371);

  homeplanet = planet;
  w = get<0>(homeplanet) ;
  cout << "Home planet get<0>: " << w << '\n';
  return 0;
}
