#include <random>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
#define N 100

int main() {
    int i, myrand;
    double Rarray[N];

    srand( 2023 ) ; // seeding for rand( )
    printf("\n RAND_MAX = %d, ", RAND_MAX );

    for(i=1; i < N ; i++){
        myrand = rand( )  ;
        printf("\n i= %3d, %12.11f", i, (float)myrand/RAND_MAX ) ;
        Rarray[i] =  (float)myrand/RAND_MAX ;
    }
} // end of main( )
