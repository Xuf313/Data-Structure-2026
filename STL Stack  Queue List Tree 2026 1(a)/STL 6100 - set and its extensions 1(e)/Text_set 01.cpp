#include <bits/stdc++.h>


using namespace std;

int main() {
    string MText1 = "나는 오늘 아침에 커피를 마셨다. 마실 예정일 수도 있다. ";
    string MText2 = "오늘 저녁에도 커피를 마실 예정이다.";

    set<string> SetM1, SetM2, SetM12;
    stringstream ss1(MText1), ss2(MText2);
    string word;

    while (ss1 >> word) SetM1.insert(word);
    while (ss2 >> word) SetM2.insert(word);

    set_intersection (SetM1.begin(), SetM1.end(), SetM2.begin(), SetM1.end(),
                              std::inserter( SetM12, SetM12.end()));

    cout << "\n SetM12 : " ;
    for (auto w : SetM12)
        cout << " " << w << ", ";
    cout << "\n";
}
