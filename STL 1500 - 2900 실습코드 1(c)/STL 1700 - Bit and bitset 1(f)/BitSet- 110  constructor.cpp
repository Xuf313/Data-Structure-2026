// bitset 클래스 템플릿은 고정된 크기의 N 비트 순열을 표현할 수 있다.
// 표준 논리 연산자로 Bitset을 다룰 수 있으며,
// 문자열 및 정수로 전환하거나, 문자열 및 정수로 부터 전환될 수 있다.
// bitset은 CopyConstructible와 CopyAssignable의 요구조건을 충족한다.

#include <bitset>
#include <string>
#include <iostream>
#include <climits>
using namespace std ;

int main() {

    bitset<8> b1; // [0,0,0,0,0,0,0,0]
    bitset<8> mybit;

    // unsigned long long constructor
    bitset<8> b2(42);          // [0,0,1,0,1,0,1,0]
    bitset<70> bl(ULLONG_MAX); // [0,0,0,0,0,0,1,1,1,...,1,1,1] in C++11
    bitset<8> bs(0xfff0);      // [1,1,1,1,0,0,0,0]

    // string constructor
    string bit_string = "110010";
    bitset<8> b3(bit_string);       // [0,0,1,1,0,0,1,0]
    bitset<8> b4(bit_string, 2);    // [0,0,0,0,0,0,1,0]
    bitset<8> b5(bit_string, 2, 3); // [0,0,0,0,0,0,0,1]

    // string constructor using custom zero/one digits
    string alpha_bit_string = "aBaaBBaB";
    bitset<8> b6(alpha_bit_string, 0, alpha_bit_string.size(),
                      'a', 'B');         // [0,1,0,0,1,1,0,1]

    // char* constructor using custom digits
    bitset<8> b7("XXXXYYYY", 8, 'X', 'Y'); // [0,0,0,0,1,1,1,1]

    cout << b1 << '\n' << b2 << '\n' << bl << '\n' << bs << '\n'
              << b3 << '\n' << b4 << '\n' << b5 << '\n' << b6 << '\n'
              << b7 << '\n';
}
