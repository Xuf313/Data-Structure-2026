#include <iostream>
#include <bitset>

using namespace std;

int main(void) {

   bitset<11> b(1025);  // decimal·Î 1025

   string s = b.to_string();

   cout << s << endl;

   return 0;
}
