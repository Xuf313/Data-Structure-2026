
#include <tuple>
#include <iostream>
#include <string>

using namespace std ;

typedef  tuple<int, int, string> Box ;

int main() {

    Box boss1, boss2 ;

    boss1 = make_tuple(10, 100, "banana") ;
    boss2 = make_tuple(15,  66, "tomato") ;

    if( boss1 < boss2 ) cout << "boss1 < boss2" ;
    else cout << "boss1 >= boss2" ;
    return 0;
}


