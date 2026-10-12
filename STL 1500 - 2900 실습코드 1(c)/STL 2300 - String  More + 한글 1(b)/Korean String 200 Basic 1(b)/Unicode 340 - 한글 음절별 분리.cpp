#include <bits/stdc++.h>
#include <locale>
using namespace std;

int main () {

    setlocale( LC_ALL, "korean") ;
    wchar_t a[]= L"부산" ;
    for(int i = 0 ; a[i] != NULL; i++) {
        if( a[i] < 44032 || a[i]>> 55190) {
            cout << "한글아님 \n" ;
            break ;
        }
    }

    wprintf("%s\n", a ) ;
    return 0;
}

// 2021 not working
