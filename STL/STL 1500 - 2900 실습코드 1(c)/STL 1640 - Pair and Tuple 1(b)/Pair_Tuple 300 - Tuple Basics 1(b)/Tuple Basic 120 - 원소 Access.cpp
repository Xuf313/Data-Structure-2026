#include <iostream>
#include <tuple>
using namespace std;

typedef tuple<int, double, string> ids ;

int main(){

   ids p1( 10, 1.1f, "Beer");   // 생성자, tuple 초기화
   ids p2(p1);                  // 복사 생성

   cout << "Out: " <<  get<2>(p2) ;

}
