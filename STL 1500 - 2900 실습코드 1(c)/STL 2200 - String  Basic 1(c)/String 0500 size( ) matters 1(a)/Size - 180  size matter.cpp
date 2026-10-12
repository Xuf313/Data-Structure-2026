#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char *a = "Banana Boat";

    int length = sizeof(a)/sizeof(char);


    cout <<  "\n strlen(a) = " << strlen(a) << endl;
    cout <<  "\n sizeof(a)= " << sizeof(a) << endl ;
    cout <<  "\n sizeof(char)= " << sizeof(char) << endl ;
    cout <<  "\n length = " << length  << endl;
    return 0;
}
