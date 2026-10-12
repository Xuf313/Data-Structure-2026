#include <string>
#include <iostream>
using namespace std ;

int main() {
    string a = "I am string one! ;)";
    string b = "string" ;

    if (a.compare(b) == 0) {      cout << "같음. \n"  ; // 두 문자열이 같을 때
    }
    else if (a.compare(b) < 0) {    cout << "사전식으로 a가 보다 빠름 \n" ;
         } else if (a.compare(b) > 0) {
           cout << "사전식으로 a가 보다 빠름 \n" ;
    };

    if( a > b ) cout << "a > b" << endl ;
    else cout << "a <= b" << endl ;
} // end of main()
