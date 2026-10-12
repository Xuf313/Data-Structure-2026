#include <iostream>
#include <bitset>
#include <sstream>

using namespace std;

int main(void) {

   string s = "101010";
   istringstream stream(s);
   bitset<2> b1;
   bitset<6> b2;

   /* Store first 2 bits */
   stream >> b1;
   cout << "b1 = " << b1 << endl;

   /* Stores next 4 bits */
   stream >> b2;
   cout << "b2 = " << b2 << endl;

   return 0;
}
