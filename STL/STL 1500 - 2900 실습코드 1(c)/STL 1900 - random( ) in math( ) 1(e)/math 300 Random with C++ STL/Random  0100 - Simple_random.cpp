#include <random>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int i, myrand;

    srand( 2018 ) ; // seeding for rand( )
    printf("\n RAND_MAX = %d, ", RAND_MAX );

    for(i=1; i < 30 ; i++){
        myrand = rand( )  ;
        printf("\n i= %3d,  %10d %10.5f", i, myrand, (float)myrand/RAND_MAX ) ;
    }
} // end of main( )
