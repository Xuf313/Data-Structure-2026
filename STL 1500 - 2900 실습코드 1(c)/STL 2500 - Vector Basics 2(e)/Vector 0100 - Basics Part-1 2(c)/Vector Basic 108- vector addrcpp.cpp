#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;

int main () {

    vector<int> myv, *vp  ;

    for(int i=1; i <= 10 ; i++){
        myv.push_back(i) ;
        vp = &myv ;
        printf("\n>  &myv = %p, size= %d, ", vp, myv.capacity() ) ;
    }

    cout << "\n vector를 pointer로 access 하기 " << endl ;
    for (size_t i = 0; i < vp->size(); ++i) {
        cout <<"\n (*vp)[i]= " <<  (*vp)[i] << " ";
    }

  return 0;

} // end of main( )
