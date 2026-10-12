#include <iostream>
#include <string> // for string and to_string()
#include <stdio.h>

using namespace std;

int main() {

    int   i_val = 8765432 ;
    float f_val = 30.54321;

    // Conversion of int into string using to_string()
    string stri = to_string(i_val);
    string strf = to_string(f_val);

    printf("\n stri= %s,  strf= %s", stri.c_str(), strf.c_str() ) ;

    return 0;
}
