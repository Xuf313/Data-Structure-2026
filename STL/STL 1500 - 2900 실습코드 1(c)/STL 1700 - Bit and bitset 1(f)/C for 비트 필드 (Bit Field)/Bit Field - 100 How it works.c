#include <stdio.h>


void printBits(size_t const size, void const * const ptr) {
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1; i>=0; i--) {
        for (j=7; j>=0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}


struct mybitfields {
    unsigned short a : 4;
    unsigned short b : 5;
    unsigned short c : 7;
} test;


int main( void ){
    test.a = 2;
    test.b = 31;
    test.c = 63;
    printBits(sizeof( test), &test );

}


