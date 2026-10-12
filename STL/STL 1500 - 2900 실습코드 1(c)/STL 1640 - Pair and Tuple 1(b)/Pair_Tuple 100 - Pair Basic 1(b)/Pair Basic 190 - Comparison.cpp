#include <bits/stdc++.h>
using namespace std;


int main() {

    vector< pair<int,int> > pvec  ;

    pvec.push_back( make_pair( 5,  5)) ;
    pvec.push_back( make_pair( 8,  6)) ;
    pvec.push_back( make_pair(13,  6)) ;
    pvec.push_back( make_pair( 5,  5)) ;

    for(auto w : pvec ){
        cout << "\n ( " << w.first << " , " << w.second  << " )" ;
    }

    if (pvec[0] < pvec[1] ) cout <<  "\n p0 < p1" ; else cout <<  "\n p0 >= p1" ;
    if (pvec[1] < pvec[3] ) cout <<  "\n p1 < p3" ; else cout <<  "\n p1 >= p3" ;
    if (pvec[2] < pvec[3] ) cout <<  "\n p2 < p3" ; else cout <<  "\n p2 >= p3" ;
    if (pvec[3] < pvec[0] ) cout <<  "\n p3 < p0" ; else cout <<  "\n p3 >= p0" ;
    if (pvec[3] < pvec[2] ) cout <<  "\n p3 < p2" ; else cout <<  "\n p3 >= p2" ;
    if (pvec[0] < pvec[3] ) cout <<  "\n p3 < p1" ; else cout <<  "\n p3 >= p1" ;

} // end of main( )
