#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {

  map <int,string> mymap;
  map <char,int>::iterator it;

  mymap[1]=  "하나";
  mymap[2]= "둘";
  mymap[4]= "셋" ;
  mymap[6]= "여섯";
  mymap[8]= "여덟";
  mymap[10]= "열이요";

  for(int i=1 ; i <=10 ; i++){
    if ( mymap.find(i) == mymap.end() )  cout << "\n> " << i << " 는 없어요" ;
    else cout << "\n> map[" << i << "] =" << mymap[i] ;
  }

  for(auto w : mymap){
    cout<< "\n w=" << w.second ;
  }
  return 0;
}
