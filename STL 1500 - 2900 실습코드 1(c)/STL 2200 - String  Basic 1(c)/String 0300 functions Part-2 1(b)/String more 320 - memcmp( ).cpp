/*

Returns a pointer to an array that contains a null-terminated sequence
of characters (i.e., a C-string) representing the current value of the string object.
 This array includes the same sequence of characters that make up
 the value of the string object plus an additional terminating
 null-character ('\0') at the end.
 The pointer returned points to the internal array currently used by the string
 object to store the characters that conform its value.
 Both string::data and string::c_str are synonyms and return the same value.
*/

#include <bits/stdc++.h>
using namespace std;



int main () {
    int length;

    string str = "Test string";
    char* cstr = "Test string";

    if ( str.length() == strlen(cstr) ) {
        cout << "str and cstr have the same length.\n";

        if ( memcmp (cstr, str.data(), str.length() ) == 0 )
            cout << "str and cstr have the same content.\n";
    }
    return 0;
}


