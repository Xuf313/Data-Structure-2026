#include <bits/stdc++.h>
using namespace std;

int main () {

    string str="무궁화 꽃이 +로 피었습니다?? . 아름답게 피었습니다.";   //
    char kc ;

    kc='w' ;

    cout << str <<  "\n" ;
    cout << kc <<  "\n" ;
    for(int i = 0 ; i <= 30 ; i++) {
        cout << "\n i= "<< i << " : " << str.substr (0,i) ;
    }
    return 0;
}
