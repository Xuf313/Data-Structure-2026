#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

void showvv(vector< vector <int> > X) {
    for (auto Vw : X) {
        cout << "\n > ";
        for (auto z : Vw) {
            cout << z << ", ";
        }
    }
}

// 아래 함수를 채우면 됩니다. 일단은 그대로 통과
vector<int> Neworder(vector<vector<int>>  Z) {
    vector<int> Result;
    //
    // 재정렬 하여 그것을 순서대로 vector Result에 넣으시요.!!!!
    //
    sort(Z.begin(), Z.end(), [&](auto& a, auto& b) {
        return (int)a.size() > (int)b.size();
        });
    int idx = 0;
    for (int i = 0; i < Z[0].size(); ++i) {
        for (auto x : Z) {
            if (idx < x.size()) {
                Result.push_back(x[idx]);
            }
        }
        ++idx;

    }

    return (Result);
}


int main() {  // 아래 2개 M1, M2로 검사합니다.
    vector< vector<int> > M1{ {345,678}, {8013}, {5996, 56, 7890, 9000}, {7309},\
                          {  }, {112,980,9}, {3245}, {566,1400, 7812, 661} };

    vector< vector<int> > M2{ {345,678}, {8013}, {5996, 56, 7890, 9000}, {7309},\
                          { 800 }, {112,980,9}, {3245}, {566,1400, 7812, 661, 4456, 8898,3451} };
    vector< int > T;

    cout << "\n\n 초기 Mclass";
    showvv(M1);
    T = Neworder(M1);
    allout("\n\n> 최종 정렬결과 T", T);


} // end of main()
