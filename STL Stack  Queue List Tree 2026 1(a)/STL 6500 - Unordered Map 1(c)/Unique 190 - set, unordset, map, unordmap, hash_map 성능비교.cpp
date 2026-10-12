//
// 각종 자료구조별 검색시간 비교하기  (성공실패 모두 포함)
// 2022. 11월 11일에 3차 수정함.
// 2023. 12월에 hash_map 추가함
// 2025 결론 hash_map에 제일 빠름,
// 실험의 내용.  100만개의 무작위 수를 만들어 Query에 집어 넣음
//           Query에서 하나씩 꺼내, 준비된 다양한 자료구조에 있는지를 확인.
//           만일 없으면 추가함. 있으면 더 이상 추가하지 않음.
//           따라서 최종적으로 남는 것은 Query에서 중복없이 unique한 것만 남음ㄴ
//           대략 37% 정도가 유일함, 그 시간을 축정함.

/*   교수님 PC에서의 결과
> 원소의 수 N = 1000000
> 자료 준비 시간 : 20.9878

 > Unique with set<int>  : 1235.6
 > Unique with unorderset<int>  : 472.018
 > Unique with plainmap<int,int>  : 1262.05
 > Unique with unordermap<int,int>  : 510.981
 > Unique with hash_map<int,int>  : 305.193

 결론 hash_map이 넣고 찼는데에는 제일 빠름. 그 다음은 unorderedset

*/


#include <bits/stdc++.h>
#include <hash_map>
using namespace __gnu_cxx;  // 이걸 써애 hash_map을 시용할 수 있다.
using namespace std;
using namespace chrono;

int   simseed = 123495 ;

int simhash2(unsigned int x, int M) {
    x = x*x + simseed  ;
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) *  0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
} // random 수 만들기 함수

int main() {
    system_clock time;
    duration<double, milli> diff_time;
    system_clock::time_point tbegin, tend ;
    int fail=0, D  ;


    set             <int>          plainset ;
    unordered_set   <int>          unorderset ;
    map             <int,int>      plainmap   ; // map[], 실제로는 red-black tree
    unordered_map   <int,int>      unordermap ; // 2022년 12월에 추가
    hash_map        <int,int>      hashmap ;
    vector          <int>          Query;

    int N = 1000000, rval, fails ;


    tbegin = time.now();
        for(int i=0; i< N ; ++i) {
            rval = simhash2(i, N ) ;
            Query.push_back( rval ) ;    // find( )에서 검색에 사용할 데이터를 미리 준비
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> 원소의 수 N = " << N << endl ;
    cout << "> 자료 준비 시간 : " << diff_time.count() << endl;

    fail = 0 ;
    tbegin = time.now();
          fails = 0 ;
          for(int i=0; i< N ; ++i) {
            rval = Query[i] ;
            auto it1 = plainset.find( rval ) ;
            if( it1 == plainset.end()) plainset.insert( rval) ;
            else { fails++ ; }
          }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n > Unique with set<int>  : " << diff_time.count() ; // <<"\n> fail= " << fails <<endl;

    fail = 0 ;
    tbegin = time.now();
          fails = 0 ;
          for(int i=0; i< N ; ++i) {
            rval = Query[i] ;
            auto it1 = unorderset.find( rval ) ;
            if( it1 == unorderset.end()) unorderset.insert( rval) ;
            else fails++ ;
          }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n > Unique with unorderset<int>  : " << diff_time.count() ; // <<"\n> fail= " << fails <<endl;

    fail = 0 ;
    tbegin = time.now();
          fails = 0 ;
          for(int i=0; i< N ; ++i) {
            rval = Query[i] ;
            auto it1 = plainmap.find( rval ) ;
            if( it1 == plainmap.end()) plainmap[ rval] = 1  ;
            else fails++ ;
          }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n > Unique with map<int,int>  : " << diff_time.count() ; // <<"\n> fail= " << fails <<endl;

    fail = 0 ;
    tbegin = time.now();
          fails = 0 ;
          for(int i=0; i< N ; ++i) {
            rval = Query[i] ;
            auto it1 = unordermap.find( rval ) ;
            if( it1 == unordermap.end()) unordermap[ rval] = 1  ;
            else fails++ ;
          }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n > Unique with unordermap<int,int>  : " << diff_time.count() ; // <<"\n> fail= " << fails <<endl;

    fail = 0 ;
    tbegin = time.now();
          fails = 0 ;
          for(int i=0; i< N ; ++i) {
            rval = Query[i] ;
            auto it1 = hashmap.find( rval ) ;
            if( it1 == hashmap.end()) hashmap[ rval] = 1  ;
            else fails++ ;
          }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n > Unique with hash_map<int,int>  : " << diff_time.count() ; // <<"\n> fail= " << fails <<endl;
} // end of main()
