
#include <iostream>
#include <functional>
#include <string>
using namespace std ;

long Gseed ;

unsigned int craft_random(unsigned int x, long M) {
    x = Gseed + x ;
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    Gseed = x ;
    return x%M;
}



int main () {

    Gseed = 2023 ;

    for(unsigned int i = 101 ; i<= 110 ; i++) {
        unsigned int x = craft_random( i, 100000 ) ;
        cout << "craft_random ( " << i << " )= " << x << endl ;
    }


  return 0;
}
