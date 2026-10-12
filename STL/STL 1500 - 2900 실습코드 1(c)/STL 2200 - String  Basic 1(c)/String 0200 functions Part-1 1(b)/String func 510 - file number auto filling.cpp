#include <bits/stdc++.h>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

string ZeroPadNumber(int w, int num) {
    ostringstream ss;
    ss << setw( w ) << setfill( '0' ) << num;
    return ss.str();
}


int main () {

 int i ;
 string iname, fname ;
 ostringstream ss;
 iname= "temp" ;
 for(i=1; i < 15 ; i++){
    fname = iname +   ZeroPadNumber(2,i) + ".txt" ;
    cout << fname << endl;
 }

  return 0;
}
