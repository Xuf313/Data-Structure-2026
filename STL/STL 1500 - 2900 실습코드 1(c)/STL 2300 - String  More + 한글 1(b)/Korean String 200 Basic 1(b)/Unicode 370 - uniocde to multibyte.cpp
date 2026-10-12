// Written by Zoh Q.

#include <bits/stdc++.h>
#include <locale>
#include <string.h>
#include <cstddef>
#include <iostream>
#include <locale>

using namespace std;

int main() {

      setlocale(LC_ALL, "korean") ;
      wchar_t kor[]= L"무엇인가 이것은" ;

      wcout.imbue   (std::locale());
      wcout << kor << "\n" ;


}
