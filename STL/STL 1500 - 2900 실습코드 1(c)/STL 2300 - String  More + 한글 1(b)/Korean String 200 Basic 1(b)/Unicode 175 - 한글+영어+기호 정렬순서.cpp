// Written by Zoh Q.

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> strings = { "바나나", "+바나나", "떡밥나나", "나나바바", \
                               "바너너",  "빠나나", "버네너" , \
                                "345",  "Banana", "banana" };

    auto printSortedMotto = [&strings] {
        for (auto& s : strings) cout << s << endl ;
        cout << endl;
    };


    sort( begin(strings), end(strings));             // Lexicographic sort
    printSortedMotto();

    string what ;

    what = "이건 " "뭐지 ? " ;
    cout << "what= " << what ;

    cout << endl;
}
