#include <iostream>
#include <random>
using namespace std ;

int main() {
  // create source of randomness, and initialize it with non-deterministic seed
  random_device r;
  seed_seq seed{r(), r(), r(), r(), r(), r(), r(), r()};
  mt19937 eng{seed};

  // a distribution that takes randomness and produces values in specified range
  uniform_int_distribution<> dist(1,100);

  for (int i=0; i<100; ++i) {
    cout << dist(eng) << " ";
    if( i%10 == 0 ) cout << "\n" ;
  }
}
