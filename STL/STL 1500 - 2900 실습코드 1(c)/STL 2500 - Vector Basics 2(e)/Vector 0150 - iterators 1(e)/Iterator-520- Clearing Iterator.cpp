#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> myvector;
    myvector.push_back (100);
    myvector.push_back (200);
    myvector.push_back (300);
    myvector.push_back (400);

    cout << "\n vec[] contains:";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;

    myvector.clear();
    myvector.push_back (1101);
    myvector.push_back (2202);

    cout << "\n After clear() vec[] contains:";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;

    cout << "\n myvector[3]: " << myvector[3];
    cout << "\n myvector.size() : " << myvector.size();
    cout << "\n myvector.capacity() : " << myvector.capacity();

    return 0;
}
