
#include <tuple>
#include <iostream>
#include <string>

using namespace std ;

struct Diet {
    string morning;
    string lunch ;
    string dinner ;
};

int main() {
    Diet my;
    my.morning = "Åä½ºÆ®";
    my.lunch   = "µÅÁö±¹¹ä";
    my.dinner  = "¿ìµ¿";

    tuple<int, string, Diet> Bob[100 ] ;

    Bob[1] = tuple< int, string, Diet> (3, "»ïÀÏÀý", my);

    cout << get<0>(Bob[1])         << endl;
    cout << get<1>(Bob[1])         << endl;
    cout << get<2>(Bob[1]).lunch   << endl;


    get<0>(Bob[1])		    = 2;
    get<1>(Bob[1])		    = "±¤º¹Àý";
    get<2>(Bob[1]).dinner	= 10002;

    cout << get<0>(Bob[1])	        << endl;
    cout << get<1>(Bob[1])	        << endl;
    cout << get<2>(Bob[1]).lunch   << endl;

    return 0;
}


