#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;

int main () {

    vector<int> myv, *vp  ;

    for(int i=1; i <= 10 ; i++){
        vp = &myv ;
        myv.push_back(i) ;
        printf("\n>  addr = %p, size= %d, ", vp, myv.capacity() ) ;
    }

    for (size_t i = 0; i < vp->size(); ++i) {
        cout <<"\n (*vp)[i]= " <<  (*vp)[i] << " ";
    }
  return 0;

}
