#include <iostream>
#include <bitset>

using namespace std;

int main(void) {

   bitset<4> b("1011");
   bitset<4> mask("1000");

   /* Trun off all bits except 4-th bit */
   auto result = b & mask;


   cout << "b= " << b << endl;
   cout << "mask= " << mask << endl;
   cout << "result= " << result << endl;

   return 0;
}
