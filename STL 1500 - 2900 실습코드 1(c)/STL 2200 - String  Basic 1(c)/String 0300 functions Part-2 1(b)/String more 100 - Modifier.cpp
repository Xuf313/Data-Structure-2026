/*
Modifiers:
operator+= : Append to string (public member function )
append  : Append to string (public member function )
push_back : Append character to string (public member function )
assign  : Assign content to string (public member function )
insert  : Insert into string (public member function )
erase   : Erase characters from string (public member function )
replace : Replace portion of string (public member function )
swap    : Swap string values (public member function )
pop_back : Delete last character (public member function )
*/
#include <bits/stdc++.h>

using namespace std;


int main () {

  string mystr ("Busan");

  mystr += "-갈매기" ;
  printf("\n 1. %s ", mystr.c_str() ) ; // printf를 사용할 때는 반드시 c_str( )
  mystr.append(" Cook");
  printf("\n 2. %s ", mystr.c_str() ) ;

  mystr.assign("Computer", 2,5) ;
  printf("\n 3. %s ", mystr.c_str() ) ;
  return 0;

}
