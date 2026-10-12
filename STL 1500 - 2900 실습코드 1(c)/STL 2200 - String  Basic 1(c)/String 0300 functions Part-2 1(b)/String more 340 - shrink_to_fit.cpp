#include <bits/stdc++.h>
using namespace std;


int main () {

  string str (100,'x');
  cout << "1. capacity of str: " << str.capacity() << '\n';

  str.resize(10);
  cout << "2. capacity of str: " << str.capacity() << '\n';

  str.shrink_to_fit();
  cout << "3. capacity of str: " << str.capacity() << '\n';

  return 0;
}

