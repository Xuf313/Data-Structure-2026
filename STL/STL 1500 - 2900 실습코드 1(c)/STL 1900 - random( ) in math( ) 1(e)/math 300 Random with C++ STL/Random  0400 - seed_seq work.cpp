#include <iostream>
#include <random>
#include <iomanip> // setw( ) 를 위하여

using namespace std ;

int main() {

  random_device r;
  seed_seq seed{ r(), r(), r(), r() };

  mt19937 eng{seed};


  uniform_int_distribution<> my_random(1,100);

  for (int i=1; i<= 100; ++i) {
    cout << setw(5) << my_random(eng) ;
    if( i%10 == 0 ) cout << "\n" ;
  }
}
