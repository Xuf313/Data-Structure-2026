#include <bits/stdc++.h>
using namespace std;


int main () {

  string str ("Call 부산");  // 한글은 2 byte.

  cout << "size: " << str.size() << "\n";
  cout << "length: " << str.length() << "\n";
  cout << "capacity: " << str.capacity() << "\n";
  cout << "max_size: " << str.max_size() << "\n";
  return 0;
}
