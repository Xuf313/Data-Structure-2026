#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {
    string mystr ;
    int    val = 1876 ;

    cout << "test1. " << setfill('0') << setw(8) << val << endl;

    mystr = to_string( setfill('0').val ) ;
    cout << "test2. " << mystr  << endl;

    return 0;
}
