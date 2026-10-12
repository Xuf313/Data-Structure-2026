/*
터미널에서 사용하시면 '> result.out' 사용하셔서 파일로 보시거나
chcp 65001 명령어로 인코딩 조절해야 한다.
그냥 쓰면 깨져서 보입니다
*/

#include <bits/stdc++.h>
using namespace std;

string Only_Hangul(string p ){
    string Ohan  ;
    int nn = p.size();
    for(int i=0; i<nn; i++) {
         if((p[i] & 0x80) != 0) {
             Ohan.push_back(p[i]);
         }
    } // end of for(i)
    return ( Ohan ) ;
} // end of ONly_Hangul( )

int main() {
    int n;
    string p = "부산 갈매기 100원 Call ? 갑시다. " ;
    string ss;

    ss = Only_Hangul( p ) ;
    cout << "ss = " << ss ;

    return 0;
}
