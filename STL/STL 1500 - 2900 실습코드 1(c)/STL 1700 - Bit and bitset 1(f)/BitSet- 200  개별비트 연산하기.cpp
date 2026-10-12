#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<8> a(string("11001100"));
    bitset<8> b(string("10101010"));

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // AND 연산
    cout << "a & b: " << (a & b) << endl;

    // OR 연산
    cout << "a | b: " << (a | b) << endl;

    // XOR 연산
    cout << "a ^ b: " << (a ^ b) << endl;

    // NOT 연산
    cout << "~a: " << (~a) << endl;

    // 좌측 시프트
    cout << "a << 2: " << (a << 2) << endl;

    // 우측 시프트
    cout << "a >> 2: " << (a >> 2) << endl;

    return 0;
}
