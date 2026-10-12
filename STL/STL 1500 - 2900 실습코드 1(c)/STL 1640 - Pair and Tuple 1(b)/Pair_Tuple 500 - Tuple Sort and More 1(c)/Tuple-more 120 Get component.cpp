
#include <tuple>
#include <iostream>
#include <string>

using namespace std ;


int main() {


    tuple<int, string,  string > Bob ;

    Bob = make_tuple( 3, "순대국","비봉집" );

    cout << "\n (" <<  get<0>(Bob) << ", " << get<1>(Bob) << ", "  << get<2>(Bob) << " ) " ;



    get<0>(Bob)		    = 45 ;
    get<1>(Bob)		    = "김치찌개";
    get<2>(Bob)      	= "고향집" ;
    cout << "\n (" <<  get<0>(Bob) << ", " << get<1>(Bob) << ", "  << get<2>(Bob) << " ) " ;

    return 0;
}


