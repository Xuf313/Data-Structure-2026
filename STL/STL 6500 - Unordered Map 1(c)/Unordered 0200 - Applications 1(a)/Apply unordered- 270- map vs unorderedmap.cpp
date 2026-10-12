#include <iostream>
#include <unordered_map>
#include <map>
#include <chrono>
#include <random>
using namespace std ;

void  insert_map_unordmap() {
    const int NUM_ELEMENTS = 100000;

    unordered_map<int, int> hashMap;
    map<int, int> treeMap;

    // 무작위 숫자 생성
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, NUM_ELEMENTS * 10);

    // unordered_map 삽입 시간 측정
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        hashMap[dis(gen)] = i;
    }
    auto end = chrono::high_resolution_clock::now();
    auto hashTime = chrono::duration_cast<chrono::milliseconds>(end - start);

    // map 삽입 시간 측정
    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        treeMap[dis(gen)] = i;
    }
    end = chrono::high_resolution_clock::now();
    auto treeTime = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "unordered_map 삽입 시간: " << hashTime.count() << "ms" << endl;
    cout << "map 삽입 시간: " << treeTime.count() << "ms" << endl;
}

main(){
   insert_map_unordmap() ;
}
