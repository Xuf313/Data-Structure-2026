// 반드시 C++17로 컴파일 해야 함.

#include <iostream>
#include <iomanip>
#include <unordered_map>   // 속도가 map<>보다 더 빠름. 진짜 map
using namespace std ;

unordered_map<int, int> m(2);

void insert(int a) {

   auto idx = m.bucket(a);                      // 키 a가 위치해야 할 버킷 인덱스 계산

   if (m.bucket_size(idx) > 0) {                // 해당 버킷에 이미 요소가 있는 경우 (충돌 발생)
      const auto& key = m.begin(idx)->first;    // 버킷의 첫 번째 요소의 키 얻기
      auto nh = m.extract(key);                 // 해당 요소를 맵에서 제거하지 않고 '노드 핸들'로 추출
      nh.key() = a;                             // 추출된 노드의 키를 새로운 키 a로 변경
      nh.mapped() = a;                          // 값도 a로 변경
      m.insert(move(nh));                       // 수정된 노드를 다시 맵에 삽입
   }
   else {
      m.insert({a, a});  // 버킷이 비어있으면 일반 삽입
   }
}

int main() {

    cout << " Unorderedmap 을 사용하는 방법 :  " ;
    for (int i = 0; i < 55 ; i++) {
      auto bc1 = m.bucket_count();
      cout << "\n i= " << i << ",  Bcount[]= " << bc1 ;
      insert(i);
      auto bc2 = m.bucket_count();
      if (bc1 != bc2) cout << " Rehashing, bc1 = " << bc1 << ", bc2 = " << bc2 << endl;
   }
}
