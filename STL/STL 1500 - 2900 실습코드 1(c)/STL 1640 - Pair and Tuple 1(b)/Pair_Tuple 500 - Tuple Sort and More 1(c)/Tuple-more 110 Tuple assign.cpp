
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

    tuple<int, string, Diet> Bob = tuple< int, string, Diet>(3, "»ïÀÏÀý", my);

    cout << get<0>(Bob)         << endl;
    cout << get<1>(Bob)         << endl;
    cout << get<2>(Bob).lunch   << endl;


    get<0>(Bob)		    = 45 ;
    get<1>(Bob)		    = "±¤º¹Àý";
    get<2>(Bob).dinner	= 10002;

    cout << get<0>(Bob)	        << endl;
    cout << get<1>(Bob)	        << endl;
    cout << get<2>(Bob).lunch   << endl;

    return 0;
}


