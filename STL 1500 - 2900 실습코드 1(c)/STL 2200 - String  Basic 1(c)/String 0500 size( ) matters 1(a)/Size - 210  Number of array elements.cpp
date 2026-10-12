#include <iostream>
#include <string.h>

using namespace std;

int main() {

    double x[10];
    int elements ;

    elements = sizeof(x) / sizeof(x[0]);

    cout << "\n sizeof(x) = " << sizeof(x) ;
    cout << "\n sizeof(x[0]) = " << sizeof(x[0]) ;
    cout << "\n elements_in_x = " <<   elements ;
        return 0;
}
