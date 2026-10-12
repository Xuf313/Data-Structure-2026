#include <random>
#include <cstdint>
#include <iostream>

/*
seed_seq consumes a sequence of integer-valued data and produces
a requested number of unsigned integer values i, 0 ¡Â i < 2^32
, based on the consumed data. The produced values are distributed
over the entire 32-bit range even if the consumed values are close.

It provides a way to seed a large number of random number engines or
to seed a generator that requires a lot of entropy, given a small
seed or a poorly distributed initial seed sequence.   */
using namespace std ;

int main() {

    seed_seq seq{1,2,3,4,5};
    vector<uint32_t> seeds(10);
    seq.generate(seeds.begin(), seeds.end());

    for (uint32_t n : seeds) {
        cout << n << '\n';
    }
}
