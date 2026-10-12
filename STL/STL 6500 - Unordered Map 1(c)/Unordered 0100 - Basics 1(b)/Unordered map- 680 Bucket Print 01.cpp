// unordered_map::begin(bucket_index)는 해당 버킷이 비어있지 않을 때만 사용해야함.
// unordered_map은 요소가 추가되면서 로드 팩터가 임계값을 초과하면 자동으로 재해싱.
// extract() 함수는 C++17에서 도입된 기능으로, 요소를 제거하지 않고 노드 핸들로 추출


#include <iostream>
#include <iomanip>
#include <unordered_map>   // 속도가 map<>보다 더 빠름. 진짜 map
#include <iostream>
#include <iomanip>
#include <unordered_map>
using namespace std;

unordered_map<int, int> m(20);

void insert(int a) {
    m[a] = a;
}

// 모든 원소 출력 함수
void printall(const unordered_map<int, int>& m) {
    cout << "\n=== All Elements in unordered_map ===" << endl;
    cout << "Total elements: " << m.size() << endl;

    for (const auto& pair : m) {
        cout << "Key: " << setw(3) << pair.first
             << ", Value: " << setw(3) << pair.second
             << ", Bucket: " << m.bucket(pair.first) << endl;
    }
}

// 버킷별로 출력하는 함수
void printall_by_buckets(const unordered_map<int, int>& m) {
    cout << "\n=== Elements by Buckets ===" << endl;
    cout << "Bucket count: " << m.bucket_count() << endl;

    for (size_t i = 0; i < m.bucket_count(); ++i) {
        cout << "Bucket " << setw(3) << i << " (" << m.bucket_size(i) << " elements): ";

        if (m.bucket_size(i) > 0) {
            for (auto it = m.begin(i); it != m.end(i); ++it) {
                cout << "[" << it->first << ":" << it->second << "] ";
            }
        } else {
            cout << "empty";
        }
        cout << endl;
    }
}

int main() {
    cout << "What Happen? ";

    for (int i = 0; i < 20; i++) {  // 출력이 많으므로 20개로 제한
        auto bc1 = m.bucket_count();
        cout << "\n i= " << i << ",  Bcount[]= " << bc1;
        insert(i);
        auto bc2 = m.bucket_count();
        if (bc1 != bc2) cout << " bc2 = " << bc2 << endl;
    }

    // 모든 원소 출력
    printall(m);

    // 버킷별로 출력
    printall_by_buckets(m);

    return 0;
}
