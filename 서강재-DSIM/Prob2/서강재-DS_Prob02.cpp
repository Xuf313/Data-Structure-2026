
#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream& operator<<(ostream& os, stack<T> my_stack) {
    //Call by value로 stack을 받아와 copy해서 출력하고 버림.
    cout << " content : ";
    while (!my_stack.empty()) { //body
        os << my_stack.top() << " ";
        my_stack.pop();
    }
    return os; // end of function
}

//  이 함수를 완성시켜야 함.
int almost_equal(stack<int> S1, stack<int> S2) {
    //
    //
    //
    stack<int> S1_uniq;
    stack<int> S2_uniq;
    while (!S1.empty()) {
        int tmp;
        tmp = S1.top();
        S1.pop();

        if (!S1.empty() && tmp != S1.top()) {
            S1_uniq.push(tmp);
            continue;
        }
        if (S1.empty()) {
            S1_uniq.push(tmp);
            continue;
        }
    }
    while (!S2.empty()) {
        int tmp;
        tmp = S2.top();
        S2.pop();
        if (!S2.empty() && tmp != S2.top()) {
            S2_uniq.push(tmp);
            continue;
        }
        if (S2.empty()) {
            S2_uniq.push(tmp);
            continue;
        }
    }

    bool same = true;
    while (true) {
        if (S1_uniq.size() != S2_uniq.size()) {
            same = false;
            break;
        }
        else {
            if (S1_uniq.empty() || S2_uniq.empty()) break;
            int s1_tmp = S1_uniq.top();
            int s2_tmp = S1_uniq.top();
            S1_uniq.pop();
            S2_uniq.pop();
            if (s1_tmp != s2_tmp) {
                same = false;
            }
        }
    }
    return(same);

}

int main(int argc, char const* argv[]) {

    deque<int> ds1{ 1, 5, 5, 5, 2, 2, 9, 9, 8 };
    deque<int> ds2{ 1, 1, 1, 5, 2, 2, 2, 9, 8, 8, 8 };
    deque<int> ds3{ 1, 5, 1, 1, 5, 2, 9, 8, 8, 8 };
    deque<int> ds4{ 1, 5, 2, 9, 8 };
    deque<int> ds5{ 2, 1, 1, 1, 5, 2, 2, 2, 9, 8, 8, 8 };
    deque<int> ds6{ 2 };
    deque<int> ds7{ 2, 2, 2, 2, 2, 2, };
    stack<int> S1(ds1);   // stack initialized to copy of deque
    stack<int> S2(ds2);
    stack<int> S3(ds3);
    stack<int> S4(ds4);
    stack<int> S5(ds5);
    stack<int> S6(ds6);
    stack<int> S7(ds7);

    cout << "\n  stack S1:  " << S1;
    cout << "\n  stack S2:  " << S2;

    int answer;

    answer = almost_equal(S1, S2);
    cout << "\n answer = " << answer;

    return 0;
}
