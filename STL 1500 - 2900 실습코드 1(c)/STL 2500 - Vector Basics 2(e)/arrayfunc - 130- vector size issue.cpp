
#include <bits/stdc++.h>
using namespace std ;


int main () {

    vector<int> myints;
    cout << "0. 초기 size: " << myints.size() << '\n';

    for (int i=0; i<10; i++)
        myints.push_back(i);
    cout << "1. 10개 삽입 후 size: " << myints.size() << '\n';
    cout << "2. 10개 삽입 후 capacity: " << myints.capacity() << '\n';

    myints.insert (myints.end(),10,100);
    cout << "3. 10개 추가 삽입 후 size: " << myints.size() << '\n';
    cout << "4. 10개 추가 삽입 후 capacity: " << myints.capacity() << '\n';

    myints.pop_back();
    cout << "5. 하나 뺀 후 size: " << myints.size() << '\n';
    cout << "6. 하나 뺀 후 capacity: " << myints.capacity() << '\n';
    return 0;
}
