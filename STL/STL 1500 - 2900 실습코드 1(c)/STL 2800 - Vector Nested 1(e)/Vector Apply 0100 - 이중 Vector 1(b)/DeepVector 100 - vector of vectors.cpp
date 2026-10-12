#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

void showvv( vector< vector <int> > X ) {
    for(auto Vw: X) {
        cout << "\n > " ;
        for(auto z: Vw ){
            cout <<  z << ", " ;
        }
    }
}
int main() {

    vector< vector <int> > devec { {3,4,5}, {32, 32, 33}, {77},  \
                                {101, 102, 103,104}, {}, {-93, -90}} ;

    showvv( devec ) ;


} // end of main()
