#include <bits/stdc++.h>
#include <iostream>
#define  N1  21000    // N=20000 이면 에러날껄 ?
#define  N2    500    // N= 1000 이면 에러날껄 ?
using namespace std ;


array< array<int, N1 >, N1> Outer_Array ;

#define i 100
#define j 340


int main() {

    array< array<int, N2 >, N2> Inner_Array ;

    Outer_Array[i][j] = 1000 ;
    Inner_Array[i][j]  = 1450 ;

    cout << Outer_Array[i][j] << "\n" ;
    cout << Inner_Array[i][j] << "\n" ;

    cout << Outer_Array[i+1][j] << "\n" ;
    cout << Inner_Array[i][j+1] << "\n" ;
return 0;
}


