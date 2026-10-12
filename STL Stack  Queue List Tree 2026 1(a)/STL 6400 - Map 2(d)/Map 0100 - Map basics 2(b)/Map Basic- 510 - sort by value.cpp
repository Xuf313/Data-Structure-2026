#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}

// vector로 바꿔서 sort( ) 함.
void my_map_sort(map<string, int>& M) {
    vector<pair<string, int> > A;
    cout << "\n my_map_sort( )를 진행함. " ;
    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
}


int main() {

    map<string, int> M;

    M = { {"G0",7}, {"Tom",34},{"Mary",13}, {"Alan",52}, {"Rissa",54} };

    cout << "> M unchanged \n" ;
    for(auto w : M) cout << w.first << " : " << w.second << endl ;

    my_map_sort(M);

    cout << "\n> After sort( M ) \n" ;
    for(auto w : M) cout << w.first << " : " << w.second << endl ;

    auto it = M.begin();
    std::advance(it, 3);
    cout << "\n 3번째 원소 it->first " << it->first;
    return 0;
}
