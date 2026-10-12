#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> m(20);

void insert_with_collision_handling(int a) {
    size_t idx = m.bucket(a);

    // 해당 버킷에 이미 요소가 있는지 확인 (충돌 발생)
    if (m.bucket_size(idx) > 0) {
        cout << "Collision detected for key " << a << " in bucket " << idx << "\n";
        // 충돌 처리: 기존 요소를 유지하고 새 요소도 추가
        m[a] = a;
    } else {
        // 충돌 없음: 일반 삽입
        m[a] = a;
    }
}

int main() {
    cout << "Hash Table Behavior Analysis\n";

    for (int i = 0; i < 500; i++) {
        auto bc1 = m.bucket_count();
        cout << "i=" << i << ", Buckets=" << bc1;
        insert_with_collision_handling(i);
        auto bc2 = m.bucket_count();
        if (bc1 != bc2) {
            cout << " --> REHASHED to " << bc2 << " buckets!";
        }
        cout << "\n";
    }

    return 0;
}
