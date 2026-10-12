#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map< int,     map<    int,   string>> w;
    //   first    second: inner_pair
    //                    first,  second

    // insert()를 사용하여 명시적으로 삽입
    w[ 1].insert({ 5, "Buchman"});
    w[ 1].insert({ 5, "X-man"});
    w[-1].insert({ 9, "Sosa"});
    w[ 4].insert({ 2, "Pepe"});
    w[ 0].insert({ 7, "Andro"});
    w[-8].insert({ 2, "Bushmill"});
    w[-8].insert({ 5, "Arnnoc"});
    w[ 1].insert({ 0, "Amanda"});
    w[ 9].insert({ 6, "Dorian"});
    w[ 9].insert({-3, "Delilar"});

    // 중복 키 시도 (실패하지만 오류는 발생하지 않음)
    auto result1 = w[9].insert({6, "Beronika"});
    auto result2 = w[9].insert({-3, "Quaga"});

    if (!result1.second) {
        cout << "Key [9][6] already exists with value: " << w[9][6] << endl;
    }
    if (!result2.second) {
        cout << "Key [9][-3] already exists with value: " << w[9][-3] << endl;
    }

    // 전체를 출력
    for (auto& p : w) {
        for (auto& inner_pair : p.second) {
            cout << "\n w[" << p.first << "," << inner_pair.first << "]= " << inner_pair.second;
        }
    }

    return 0;
}
