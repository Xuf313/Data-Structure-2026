#include <bits/stdc++.h>
using namespace std;

int main() {

    vector < tuple<int, int, int> > v;
    tuple<int, int, int>  myt ;
    myt = make_tuple( 3, 12,  7) ;

    v.push_back( make_tuple(10, 20, 30));
    v.push_back( make_tuple(15,  5, 25));
    v.push_back( make_tuple( 3,  2,  1));
    v.push_back( make_tuple( 6, 10,  4));
    v.push_back( make_tuple(15,  4,  2));
    v.push_back( myt );
    v.push_back( make_tuple( 3,  7, 11));
    v.push_back( make_tuple(16,  0, 14));
    v.push_back( make_tuple( 1, 14,  8));
    v.push_back( make_tuple( 6, -5,  5));

    sort(v.begin(), v.end());
    cout << " 정렬이후 v의 결과 \n";

    int v1, v2, v3 ;
    for(auto s : v){
       tie(v1, v2, v3) = s ;
        cout << v1 << " " << v2 << " " << v3 << endl ;
    }

    return 0;
}
