#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <deque>
#include <string>
using namespace std ;



int main() {
    vector<string> v{ "1","2","3","Cook", "Tax" };
    deque <string> r ;

    copy(cbegin(v), cend(v), front_inserter(r));
    // v원소는 r의 앞쪽으로 넣어라.

    string s123 = accumulate(make_move_iterator(begin(v)),
                             make_move_iterator(end(v)),
                             string());
    cout << " s123= "<< s123 << '\n';                            // 123


    cout << endl;
}
