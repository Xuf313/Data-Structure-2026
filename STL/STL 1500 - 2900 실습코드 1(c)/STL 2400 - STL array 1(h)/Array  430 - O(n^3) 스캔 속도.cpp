#include <bits/stdc++.h>
#include <random>
#include <chrono>

using namespace std;
using namespace chrono;
using in_secs = duration<double>;

#define N 6000




float T[N][N];

void setT(){  // 2차원 행렬 초기화
      for(int i=0; i < N ; i++){
         for(int j=0; j < N ; j++){
            T[i][j] = rand( );
         }
      }
} // end of setT()

int main() {

system_clock time;
in_secs diff_time;

    auto tbegin = time.now();
    setT( );  // 초기화
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n 2D 배열 초기화에 걸린 시간 " << diff_time.count() << endl;

    tbegin = time.now();
    for(int k = 0 ; k < N ; k++){
        cout << "\n k= " << k ;
        for(int i=0; i < N ; i++){
           for(int j=0; j < N ; j++){
            T[i][j] = min ( T[i][j], T[i][k]+T[k][j]) ;
           }
       }
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n 3D 배열 min( ) 계산 시간 " << diff_time.count() << endl;
    cout << "\n Done!" ;
} // end of main()
