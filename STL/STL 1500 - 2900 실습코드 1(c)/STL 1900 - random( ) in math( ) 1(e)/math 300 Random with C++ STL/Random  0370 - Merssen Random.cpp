#include <random>
#include <iostream>
using namespace std;

int main ( void ) {
    int t ;
    float f ;
    mt19937_64 rnd ;
    rnd.seed( 2018 ) ;
    //uniform_int_distribution< > myrange(0, 100) ;
    uniform_int_distribution< > myrange(0, 100) ;

    uniform_real_distribution< double > yourrange(-1.0, 1.0) ;
    //uniform_int_distribution<mt19937::result_type>  myrange(0, 100) ;

    for ( int i = 0 ; i < 10; i++ )     {
         t = myrange( rnd ) ;
         f = yourrange( rnd ) ;
         cout << f << "  " <<  t << endl;
    }

}


