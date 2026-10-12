#include <utility>      // pair, make_pair
#include <string>       // string
#include <iostream>     // cout
using namespace std ;

typedef   pair<string,int>  Mytype ;


int main () {

  Mytype planet, homeplanet;
  vector < Mytype > X ;

  planet = make_pair("Earth",6371);

  M.push_back( planet ) ;

  homeplanet = planet;
  M.push_back( homeplanet ) ;


  cout << "Home planet: " << homeplanet.first << '\n';
  cout << "Planet size: " << homeplanet.second << '\n';
  return 0;
}
