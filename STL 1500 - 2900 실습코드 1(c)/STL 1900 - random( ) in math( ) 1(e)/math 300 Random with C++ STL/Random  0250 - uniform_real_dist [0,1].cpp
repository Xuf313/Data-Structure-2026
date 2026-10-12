#include <random>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    random_device rd;
    mt19937 e2( rd());
    uniform_real_distribution   <> dist(0, 1);

    for (int i = 1; i <= 100; ++i) {
        printf("\n i = %3d, %15.12f ", i, dist(e2) ) ;
    }

} // end of main( )
