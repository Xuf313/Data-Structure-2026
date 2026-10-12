#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // 중첩 우선순위 큐 선언
    // priority_queue<priority_queue<int>> DeepPQ;  // 이렇게 사용하면 컴파일 에러 발생

    // 대신 다음과 같이 선언해야 합니다
    // priority_queue의 기본 컨테이너는 vector이며, less<>를 사용합니다
    priority_queue<priority_queue<int>, vector<priority_queue<int>>, less<priority_queue<int>>> DeepPQ;

    cout << "=== 중첩 우선순위 큐(DeepPQ) 동작 테스트 ===" << endl;

    // 여러 개의 priority_queue 생성
    priority_queue<int> pq1;
    pq1.push(30);
    pq1.push(10);
    pq1.push(20);

    priority_queue<int> pq2;
    pq2.push(5);
    pq2.push(15);
    pq2.push(25);
    pq2.push(35);

    priority_queue<int> pq3;
    pq3.push(100);
    pq3.push(50);

    // 중첩 큐에 각 큐 추가
    cout << "\n1. 중첩 큐에 3개의 priority_queue 추가:" << endl;
    DeepPQ.push(pq1);
    DeepPQ.push(pq2);
    DeepPQ.push(pq3);

    cout << "현재 중첩 큐 크기: " << DeepPQ.size() << endl;

    // 중첩 큐의 top 요소 확인 및 출력
    cout << "\n2. 중첩 큐의 top 요소 확인:" << endl;
    if (!DeepPQ.empty()) {
        priority_queue<int> topPQ = DeepPQ.top();
        cout << "가장 높은 우선순위를 가진 큐의 top 값: " << topPQ.top() << endl;

        // 해당 큐의 모든 요소 출력
        cout << "해당 큐의 모든 요소: ";
        priority_queue<int> temp = topPQ;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    // 중첩 큐의 모든 요소 순회 (실제로는 pop 해야만 접근 가능)
    cout << "\n3. 중첩 큐의 모든 요소 순회:" << endl;
    int count = 1;

    // 중첩 큐를 복사해서 작업 (원본 유지)
    auto tempDeepPQ = DeepPQ;

    while (!tempDeepPQ.empty()) {
        priority_queue<int> currentPQ = tempDeepPQ.top();
        tempDeepPQ.pop();

        cout << "큐 " << count++ << " - ";
        cout << "원소 개수: " << currentPQ.size() << ", ";
        cout << "최대값: " << currentPQ.top() << ", ";

        // 현재 큐의 모든 요소 출력
        cout << "모든 요소: ";
        priority_queue<int> temp = currentPQ;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    // 원본 중첩 큐에서 요소 제거
    cout << "\n4. 원본 중첩 큐에서 pop 작업:" << endl;
    while (!DeepPQ.empty()) {
        priority_queue<int> topPQ = DeepPQ.top();
        cout << "제거되는 큐의 top 값: " << topPQ.top() << endl;
        DeepPQ.pop();
        cout << "pop 후 중첩 큐 크기: " << DeepPQ.size() << endl;
    }

    return 0;
}
