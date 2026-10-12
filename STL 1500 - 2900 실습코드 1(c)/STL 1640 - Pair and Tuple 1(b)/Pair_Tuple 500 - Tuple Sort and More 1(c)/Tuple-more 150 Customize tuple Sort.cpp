#include <bits/stdc++.h>
using namespace std;

typedef tuple <string, int ,int>  Person ;

bool mymy(const Person& a, const Person& b){
  return( get<1>(a) < get<1>(b) ) ;
}

bool your(const Person& a, const Person& b){
  return( get<0>(a) < get<0>(b) ) ;
}

// <1>은 오름차순, 같으면 <2>은 내림차순
bool their(const Person& a, const Person& b){
   if ( get<1>(a) != get<1>(b) ) { return ( get<1>(a) < get<1>(b) ) ;}
   else  return( (get<2>(a) > get<2>(b)) ) ;
}

int main () {

  vector< Person > T;
  T.emplace_back( make_tuple("Gaju", 31, 41)) ;
  T.emplace_back( make_tuple("Siju", 32, 42)) ;
  T.emplace_back( make_tuple("Aoju", 31, 43)) ;
  T.emplace_back( make_tuple("Roju", 32, 47)) ;
  T.emplace_back( make_tuple("Sopu", 31, 44)) ;
  T.emplace_back( make_tuple("FoPu", 32, 43)) ;
  T.emplace_back( make_tuple("Seju", 30, 42)) ;
  T.emplace_back( make_tuple("Toru", 32, 41)) ;
  T.emplace_back( make_tuple("Sopu", 31, 42)) ;
  T.emplace_back( make_tuple("FoPu", 33, 40)) ;
  T.emplace_back( make_tuple("Suju", 34, 41)) ;
  T.emplace_back( make_tuple("Toru", 33, 44)) ;


  cout << "\n\n  get<1>(a) < get<1>(b) 기준 " ;
  sort( T.begin(), T.end(), mymy ) ;
  for(auto w: T){
    cout << "\n" << setw(5) << get<0>(w) <<  setw(5) << get<1>(w) <<  setw(5) << get<2>(w) ;
  }

  cout << "\n\n  get<0>(a) < get<0>(b) 기준 " ;
  sort( T.begin(), T.end(), your ) ;
  for(auto w: T){
    cout << "\n" << setw(5) << get<0>(w) <<  setw(5) << get<1>(w) <<  setw(5) << get<2>(w) ;
  }

  cout << "\n\n  2가지 복합 조건 ) 기준  " ;
  sort( T.begin(), T.end(), their ) ;
  for(auto w: T){
    cout << "\n" << setw(5) << get<0>(w) <<  setw(5) << get<1>(w) <<  setw(5) << get<2>(w) ;
  }
  return 0;
}
