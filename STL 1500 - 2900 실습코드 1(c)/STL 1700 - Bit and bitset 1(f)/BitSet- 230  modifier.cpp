// bitset 클래스 템플릿은 고정된 크기의 N 비트 순열을 표현할 수 있다.

#include <bitset>
#include <string>
#include <iostream>
#include <climits>
using namespace std ;

int main() {


    bitset<10> b2(842);          // [1,1,0,1,0,0,1,0,1,0]
    bitset<70> bl(ULLONG_MAX); // [0,0,0,0,0,0,1,1,1,...,1,1,1] in C++11
    bitset<8> bs(0xfff0);      // [1,1,1,1,0,0,0,0]

    // string constructor
    string bit_string = "110010";
    bitset<8> b3(bit_string);       // [0,0,1,1,0,0,1,0]
    bitset<8> b4(bit_string, 2);    // [0,0,0,0,0,0,1,0]
    bitset<8> b5(bit_string, 2, 3); // [0,0,0,0,0,0,0,1]

//  Modifiers &=,   |=, ^=,    ~
//  binary    AND, OR,  XOR, NOT
//  <<=    >>=   <<    >>  for Shift operation

    cout << "\n Test 01 : " << b2 << endl ;
    cout << "\n Test 02 : " << b4 << endl ;
    b2 = b2 << 1 ;
    cout << "\n Test 03 : " << b2 << endl ;
}
