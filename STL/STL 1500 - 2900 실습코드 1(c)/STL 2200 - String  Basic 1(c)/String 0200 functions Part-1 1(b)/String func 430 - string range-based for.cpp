#include <bits/stdc++.h>
using namespace std;

int main (){


  string mystr ("Suumer Time Where are you going?");
  string kstr ("맥주와 소주");

  for(auto s : mystr) cout << " " << s ;

  cout << "\n 한국어 처리 : " << kstr << endl ;
  cout << "sizeof( kstr)= " << sizeof( kstr) << endl  ;

  for(auto it= kstr.begin(); it < kstr.end(); it++){
    cout << " " << *it ;  // 한글은 2-byte라서 보이지 않음
  }


  return 0;
}
