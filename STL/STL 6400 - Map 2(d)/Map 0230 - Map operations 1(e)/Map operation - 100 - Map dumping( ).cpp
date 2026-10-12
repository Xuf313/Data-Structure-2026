#include <bits/stdc++.h>

using namespace std ;

template <typename C>
void mapdump(const char *desc, C c) {
	 cout << "\n------ " << desc << " -------\n" ;
	 for (auto& x: c) {
        cout << x.first << " => " << x.second << '\n';
     }
} // dump( ) template



int main () {
  map <char,string> mymap;

  mymap['a'] = "an element";
  mymap['b'] = "another element";
  mymap['c'] = mymap['b'];

  cout << "> mymap now contains " << mymap.size() << " elements.\n";

  mapdump( "한번 찍어보자고",  mymap ) ;

  return 0;
}





