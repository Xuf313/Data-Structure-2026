#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std ;

bool chrcomp (char i, char j) { return (i<j); }

int main() {

	string str = "Cool Time Box";
	list <char> lchars( str.begin(), str.end());

	for (char c: lchars) cout << c << ' ' ;

	lchars.sort(  ) ;  // Generic  ¾øÀ½.

	cout << "\n after sort \n" ;
	for (char c: lchars) cout << c << ' '  ;

	return 0;
}
