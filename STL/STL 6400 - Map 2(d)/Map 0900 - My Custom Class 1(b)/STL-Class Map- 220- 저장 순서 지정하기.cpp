// With < operator defined as member method.
#include <bits/stdc++.h>
using namespace std;
struct Test {
    string name ;
    int id;
    bool operator<(const Test& t) const {
        return (this->name < t.name ); // 정렬 기준을 설정
        //return (this->id < t.id ); // 정렬 기준을 설정
    }
};

int main() {
    Test t1 = { "orange", 110 }, t2 = {"compiler", 102 }, t3 = { "youtube",101 }, t4 = {"errorO", 115 },
         t5 = { "good_boy", 15 }, t6 = {"다람쥐", -78 }, t7 = { "막걸리", 6453 }, t8 = {"banana", 115 };


    map <Test, int> mp;
    mp[t1] = 101;
    mp[t2] = 230;
    mp[t3] = 793;
    mp[t4] = 240;
    mp[t5] = 611;
    mp[t6] = -223;
    mp[t7] = 318;
    mp[t8] = 460;

    // Printing Test objects in sorted order
    for (auto x : mp)
        cout << "name[ " << x.first.name << "," << x.second << "]" << endl;
    return 0;
}

