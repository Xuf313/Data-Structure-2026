// 문제 3번
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;

int GetM(int i, int j, vector<int> TD ) {
    int n ;
    n = (TD.size()+2)/3 ;
    /*

    TD 자료구조를 원래의  M[i][j]의 값을 출력해야 함.



    */
    return( L[0] ) ; // 이것은 동작을 확인하는 dummy code입니다.

}

vector<int> TD1 { 3, 5, -4,  1, 3, -2, 10,  8, 5, 2,  5,  3, 9}  ;      // M[n][n]에서 n은 5, 3*5-2= 13
vector<int> TD2 { 7, 3, -8,  1, 6,  1,  4, 10, 7, 2, 10,  2, 9, 4,  3, 11  } ;  // M[6][6]
vector<int> TD3 { 3, 2,  1, 10, 7,  3, -8,  1, 6, 1,  4, 10, 7, 2, 10,  2, 9, -4, -5  } ; // M[7][7]
int         N1, N2, N3 ;

int main () {
    int i, mi, mj, value ;
    N1 = (TD1.size()+2)/3 ;
    N2 = (TD2.size()+2)/3 ;
    N3 = (TD3.size()+2)/3 ;

    srand(2025) ;
    // 문제지에 나온 예제로 검사함.
    for(i=1 ; i < int(N1*N1/2); i++) {
            mi = rand()%N1 + 1 ; // 무작위로 M의 원소를 선택한다.
            mj = rand()%N1 + 1 ;
            value = GetM( mi, mj, TD1) ;
            printf("\n i=%d, j=%d, ㅡM[i][j]=%d", mi, mj, value);
    }

    return 0;

}
