#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main(void) {
   string s = "110110110";
   bitset <10> b(s);

   cout << b << endl;

   return 0;
}
