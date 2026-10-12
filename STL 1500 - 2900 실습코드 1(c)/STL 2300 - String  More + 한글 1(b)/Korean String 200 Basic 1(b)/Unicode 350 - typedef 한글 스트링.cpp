#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< "\n " << w ;
using namespace std;

typedef  list <string> Kdef ;

int main () {
    list <string> ktext { "이거시" , "무엇이냐", "이", "넘들아", "안보이냐"} ;

    Kdef ktext2 { "왜" , "안될까", "typedef으로 ", "선언을", "하면..."}  ;

    outlist("한글 문자열 리스트", ktext ) ;
    outlist("한글 문자열 ktext2", ktext2 ) ;

    return 0;
}
