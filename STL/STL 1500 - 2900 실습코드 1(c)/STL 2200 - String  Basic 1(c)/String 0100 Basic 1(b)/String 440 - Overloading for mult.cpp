#include <bits/stdc++.h>
using namespace std;


string operator * (string a, unsigned int b) {
    string output = "";
    while (b--) {
        output += a;
    }
    return output;
}


int main() {
    string str = "Beer_";
    cout << (str * 2) << endl ;

    str= "Cool Winter-" ;
    cout << (str * 8 )<< endl;
    return 0;
}
