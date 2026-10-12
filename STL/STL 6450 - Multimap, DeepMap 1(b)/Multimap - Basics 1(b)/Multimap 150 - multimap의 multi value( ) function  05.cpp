#include<iostream>
#include<map>
using namespace std;

// 특정 키의 모든 값을 출력하는 함수
void printAllValues(const multimap<string, string>& m, const string& key){
    cout << "\n=== '" << key << "'의 모든 값 (" << m.count(key) << "개) ===";
    auto range = m.equal_range(key);
    for(auto it = range.first; it != range.second; ++it){
        cout << "\n " << it->second;
    }
}

int main(void){
    multimap<string, string> alias;
    alias.insert(pair<string, string>("김태균", "김별명"));
    alias.insert(pair<string, string>("김태균", "김말코"));
    alias.insert(pair<string, string>("김태균", "몸개그"));
    alias.insert(pair<string, string>("손아섭", "멋찌나"));
    alias.insert(pair<string, string>("이대호", "돼랑이"));
    alias.insert(pair<string, string>("전준우", "고구마"));
    alias.insert(pair<string, string>("이대호", "백돼지"));

    // 여러 키의 값 출력
    printAllValues(alias, "김태균");
    printAllValues(alias, "이대호");
    printAllValues(alias, "손아섭");

    return 0;
}
