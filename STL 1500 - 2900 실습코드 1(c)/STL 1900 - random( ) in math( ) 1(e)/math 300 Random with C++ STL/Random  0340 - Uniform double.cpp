#include <iostream>
#include <random>
using namespace std ;

int main() {

       random_device seed;
       mt19937 rnd(seed());
       uniform_real_distribution<> d(500, 1000);

        for(int n = 0; n < 10; ++n)
                cout << d(rnd) << endl ;

        cout << '--- Random Number End --- \n';
}
