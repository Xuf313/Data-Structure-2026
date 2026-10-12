#include <bits/stdc++.h>
using namespace std;

int main (){


  string mystr = "Beer and Soju" ;
  for(auto s : mystr) cout << " " << s ;  // 한 문자씩

  mystr = "부산 갈매기 SeaGull" ;
  for(auto s : mystr) cout << " " << s ;  // 한 문자씩

  // Edit >> Encoding >> System Default

  cout << "\n Loop 을 돌자.   : " << endl ;

  for(auto it= mystr.begin(); it <  mystr .end(); it++){
    cout << " " << *it ;
  }


  return 0;
}
