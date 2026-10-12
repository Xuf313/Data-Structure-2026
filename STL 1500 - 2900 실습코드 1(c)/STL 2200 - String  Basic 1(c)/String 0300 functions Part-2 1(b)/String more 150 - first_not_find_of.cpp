#include <bits/stdc++.h>
using namespace std;


int main () {
    string str ("look for non-alphabetic characters...");

    size_t found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");

    if (found!=string::npos) {
        cout << "The first non-alphabetic character is " << str[found];
        cout << " at position " << found << '\n';
    }

    return 0;
}

