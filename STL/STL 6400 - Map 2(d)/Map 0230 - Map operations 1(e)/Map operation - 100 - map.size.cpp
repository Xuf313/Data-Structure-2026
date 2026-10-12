#include <bits/stdc++.h>
#include "mymaptool.h"

using namespace std ;


int main () {
  map <char,string> mymap;

  mymap['a'] = "an element";
  mymap['b'] = "another element";
  mymap['c'] = mymap['b'];

  cout << "> mymap now contains " << mymap.size() << " elements.\n";

  mapdump( "한번 찍어보자고",   map <char,string> mymap ) ;

  return 0;
}





