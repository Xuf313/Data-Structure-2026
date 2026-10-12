#include <bits/stdc++.h>
using namespace std;

typedef tuple <string, int ,int>  Person ;

int main () {
  Person pa, pb, pc ;

  pa = make_tuple("Soju", 32, 45) ;
  pb = make_tuple("Soju", 31, 78) ;
  pc = make_tuple("Anju", 31, 23) ;

  if( pa > pb ) cout << "pa > pb " << endl ;
  else cout << " pa <= pb" << endl ;

  vector< Person > T;
  T.emplace_back( make_tuple("Gaju", 31, 41)) ;
  T.emplace_back( make_tuple("Siju", 32, 42)) ;
  T.emplace_back( make_tuple("Aoju", 31, 43)) ;
  T.emplace_back( make_tuple("Roju", 32, 44)) ;
  T.emplace_back( make_tuple("Sopu", 33, 44)) ;
  T.emplace_back( make_tuple("FoPu", 32, 43)) ;
  T.emplace_back( make_tuple("Seju", 30, 42)) ;
  T.emplace_back( make_tuple("Toru", 30, 41)) ;

  sort( T.begin(), T.end()) ;
  for(auto w: T){
    cout << "\n" << setw(5) << get<0>(w) <<  setw(5) << get<1>(w) <<  setw(5) << get<2>(w) ;
  }
  return 0;
}
