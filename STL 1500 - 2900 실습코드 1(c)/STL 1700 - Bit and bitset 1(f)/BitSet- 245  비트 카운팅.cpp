#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<8> bs(string("11001100"));

    cout << "bitset: " << bs << endl;

    // 1의 개수 세기
    cout << "Count of 1: " << bs.count() << endl;

    // 0의 개수 세기
    cout << "Count of 0: " << (bs.size() - bs.count()) << endl;

    // 크기 확인
    cout << "Size: " << bs.size() << endl;

    // 다양한 형식으로 변환
    cout << "to_ulong(): " << bs.to_ulong() << endl;
    cout << "to_ullong(): " << bs.to_ullong() << endl;
    cout << "to_string(): " << bs.to_string() << endl;

    return 0;
}
