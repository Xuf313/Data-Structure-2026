#include <iostream>
#include <random>
#include <iomanip> // setw( ) 를 위하여

using namespace std ;

int main() {   // 무작위 소스 발생기를 정의하고 초기화

  random_device r;

  seed_seq seed{ r(), r(), r(), r(), r(), r(), r(), r()};

  mt19937 eng{seed};

  // 일양분포, 범위는 [1,100]
  int here, there ;
  here = 1 ; there = 100 ;
  uniform_int_distribution<> my_random( here, there );

  for (int i=1; i<= 100; ++i) {
    cout << setw(5) << my_random(eng) ;
    if( i%10 == 0 ) cout << "\n" ;
  }
}
