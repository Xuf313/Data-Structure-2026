#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {
    vector <int>    veca = {  10,    20,   30,   40,   50 };
    vector <int>    vecm = { 10 };

    veca = vecm;  // vector type이 같으면 assign이 됩니다.

    allout("veca[] ", veca) ;
    allout("vecb[] ", vecm) ;

    //    vecd = veca; //  vector type이 다르면 assign이 되지 않습니다.


} // end of main( )
