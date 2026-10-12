#include <bits/stdc++.h>
using namespace std;



int main () {

  string str ("hello world!");
  char  c ;

  c='$' ;
  str.pop_back();
  cout << "1 " << str << '\n';

  str.push_back( c ) ;    // 끝에 한 문자 char를 추가한다.
  cout << "2 " << str << '\n';
  return 0;
}
