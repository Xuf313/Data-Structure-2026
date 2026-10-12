#include <bits/stdc++.h>
using namespace std;

int main () {

    string str="무궁화 꽃이 +, $ 피었습니다. 아름답게 ㅎㅎ - 피었습니다.";   //
    cout << "Input str= " << str << endl ;

    string str2 = str.substr (0,4);     //
    string str3 = str.substr (9,10);
    size_t pos = str.find("답게");      // position of "live" in str

    string str4 = str.substr (pos);     // get from "live" to the end

    cout << "str.substr (0,2) = " << str.substr (0,2) << endl ;
    cout << "str.substr (0,4) = " << str2 << endl ;
    cout << "str.substr (9,10)= " << str3 << endl ;
    cout << "str.find(답게) =" << str4 << endl ;

    return 0;
}
