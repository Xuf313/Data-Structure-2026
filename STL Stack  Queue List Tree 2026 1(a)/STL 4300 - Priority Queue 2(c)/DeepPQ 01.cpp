#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// priority_queue 비교를 위한 사용자 정의 비교 함수
struct PriorityQueueComparator {
    bool operator()(const priority_queue<int>& a, const priority_queue<int>& b) const {
        // 각 큐의 top 값을 기준으로 비교
        if (a.empty() && b.empty()) return false;
        if (a.empty()) return true;    // 빈 큐가 더 작음
        if (b.empty()) return false;   // 빈 큐가 더 작음

        return a.top() < b.top();  // 최대값 기준으로 비교
    }
};

int main() {
    // 사용자 정의 비교 함수를 사용한 중첩 큐
    priority_queue<priority_queue<int>,
                   vector<priority_queue<int>>,
                   PriorityQueueComparator> CustomDeepPQ;

    cout << "=== 사용자 정의 비교 함수를 사용한 중첩 큐 ===" << endl;

    priority_queue<int> q1, q2, q3;

    q1.push(100);
    q1.push(50);

    q2.push(200);
    q2.push(150);

    q3.push(75);
    q3.push(125);

    CustomDeepPQ.push(q1);
    CustomDeepPQ.push(q2);
    CustomDeepPQ.push(q3);

    cout << "중첩 큐의 top에 있는 큐의 최대값: " << CustomDeepPQ.top().top() << endl;

    return 0;
}
