#include <iostream>
#include <bitset>

using namespace std;

int main(void) {

   bitset<14> b;

   cout << "Initial value of bitset = " << b << endl;

   b[11] = 1;
   b[10] = 1;
   b[3] = 1;

   cout << "Value of bitset after setting few bits = " << b << endl;

   return 0;
}
