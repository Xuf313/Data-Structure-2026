#include <bits/stdc++.h>
using namespace std;

typedef tuple <string, float , string,int>  Astra ;

int main () {
  Astra planet, homeplanet, ttemp;
  string w ;

  planet = make_tuple("Punch", 34.67, "Earth",6371);
  homeplanet = planet;

  w = get<0>(homeplanet) ;
  cout << "Home planet get<0>: " << w << '\n';

  ttemp = planet ;
  cout << "get<1>ttemp : " << get<1>(ttemp) << '\n';
  array < Astra, 5> Galaxy ;

  Galaxy.front() =  homeplanet ;
  cout << "get<1>(Galaxy[0]) = "<< get<1>(Galaxy[0]) ;
  return 0;
}
