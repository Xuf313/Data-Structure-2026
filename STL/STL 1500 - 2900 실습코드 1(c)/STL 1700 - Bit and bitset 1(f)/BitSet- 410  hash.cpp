#include <iostream>
#include <bitset>
#include <functional>
using namespace std ;

/*  to_string :  returns a string representation of the data
    to_ulong  :  returns an unsigned long integer representation of the data
    to_ullong :  (C++11) returns an unsigned long long integer representation
                 of the data  */

int main() {

    bitset<4> b1(1);
    bitset<4> b2(2);
    bitset<4> b3(b2);

    hash < bitset<4> > hash_fn;

    size_t h1 = hash_fn(b1);
    size_t h2 = hash_fn(b2);
    size_t h3 = hash_fn(b3);

    cout << h1 << '\n';
    cout << h2 << '\n';
    cout << h3 << '\n';
}
