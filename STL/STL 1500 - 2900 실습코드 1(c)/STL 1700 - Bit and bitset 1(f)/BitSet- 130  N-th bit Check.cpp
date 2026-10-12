#include <iostream>
#include <bitset>

using namespace std;

int main(void) {

   bitset<10> b(011011011);

   if ( b.test(1))  cout << "1st bit is set 1." << endl;
   else             cout << "1st bit is unset 0." << endl;
   if (!b.test(0))  cout << "0th bit is not set. 0" << endl;
   else             cout << "0th bit set 1." << endl;

   return 0;
}
