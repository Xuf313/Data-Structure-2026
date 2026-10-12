#include <iostream>
#include <random>
#include <stdio.h>

using namespace std ;

int main() {

       random_device seed;
       mt19937 rnd(seed());
       normal_distribution< > d(170, 10.0);

        for(int n = 0; n < 10; ++n)
                cout << d(rnd) << endl ;

       cout << "표준정규분포 실험 끝 " << endl ;
} // end of main( )
