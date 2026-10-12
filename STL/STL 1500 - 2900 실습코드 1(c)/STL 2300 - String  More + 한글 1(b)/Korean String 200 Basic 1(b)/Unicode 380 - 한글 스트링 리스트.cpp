#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< "\n " << w ;
using namespace std;

int main () {
    list <string> ktext { "이거시" , "무엇이냐", "이", "넘들아", "안보이냐"} ;

    outlist("한글 문자열 리스트", ktext ) ;

    return 0;
}
