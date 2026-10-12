#include <bits/stdc++.h>
using namespace std;

vector < pair<string, int> > v ;
         pair<string, int>   tpair ;

bool my(const pair<string, int> &a, const pair<string, int> &b ){
    return (  a.second > b.second ) ;
}

int main() {


    tpair.first  = "Beer" ;
    tpair.second = 15 ;

    v.push_back( make_pair("Soju", 23));
    v.push_back( make_pair("Beer", 12));
    v.push_back( make_pair("Cola", 23));
    v.push_back( make_pair("Soju", 12));
    v.push_back( tpair ) ;
    v.push_back( make_pair("Cola", 19));
    v.push_back( make_pair("Cola", 12));
    v.push_back( make_pair("Soju", 15));

    sort(v.begin(), v.end());

    cout << " 정렬이후 v의 결과 \n";
    auto i = 1;
    for(auto s : v){
        cout << setw(3) << i++ << ": "<< setw(3)<< s.first << " " << setw(3)<< s.second << endl ;
    }

    sort(v.begin(), v.end(), my );

    cout << "\n 내맘대로 정렬이후 v의 결과 \n";
    i = 1;
    for(auto s : v){
        cout << setw(3) << i++ << ": "<< setw(3)<< s.first << " " << setw(3)<< s.second << endl ;
    }


    return 0;
}
