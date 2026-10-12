#include <random>
#include <iostream>
using namespace std;

int main() {
    int i;
    long  b, e ;
    mt19937_64 rng;
    //rng.seed( random_device()());
    rng.seed( 123 );

    b = 1000 ;
    e = 10000000 ;
    uniform_int_distribution<mt19937::result_type> dist6(b, e);


    for(i=1; i < 10 ; i++){
            cout << dist6(rng) << endl;
    }

    for(i=1; i < 10 ; i++){
            cout << dist6(rng)%100 << endl;
    }
}
