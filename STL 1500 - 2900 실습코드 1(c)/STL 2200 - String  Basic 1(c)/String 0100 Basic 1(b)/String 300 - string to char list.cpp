#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std ;


int main() {

	string str = "Cool_Time_Box";
	list <char> lchars( str.begin(), str.end());

	cout << "\n Begin lchars[] = \n" ;
	for (char c: lchars) cout << c << ' ' ;

	lchars.sort( ) ;

	cout << "\n after sort lchars[]\n" ;
	for (char c: lchars) cout << c << ' '  ;

	return 0;
}
