#include <bits/stdc++.h>
using namespace std;

int main (){
  int i = 0 ;

  string str ("Test string");
  for ( auto it=str.begin(); it!=str.end(); ++it)
    cout << "\n i= " << (it - str.begin()) << " : " << *it;

  cout << '\n';

  for ( auto it=str.begin(); ; ++it) {
         cout << "\n i= " << (it - str.begin()) << " : " << *it;
         if( ++i > 30) break ;
  }

  cout << '\n';

  return 0;
}
