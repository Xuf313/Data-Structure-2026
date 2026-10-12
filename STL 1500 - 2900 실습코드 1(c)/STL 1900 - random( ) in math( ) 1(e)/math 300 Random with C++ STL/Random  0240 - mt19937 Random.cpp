#include <random>
#include <iostream>
using namespace std;

int main() {
    int i;
    long  b, e ;
    mt19937 rng;
    rng.seed( random_device()());
    rng.seed( 123 );

    b = 1 ;
    e = 1000000000000 ;
    uniform_int_distribution<mt19937::result_type> dist6(b, e);
    // distribution in range [b, e]

    for(i=1; i < 30 ; i++){
            cout << dist6(rng) << endl;
    }
}
