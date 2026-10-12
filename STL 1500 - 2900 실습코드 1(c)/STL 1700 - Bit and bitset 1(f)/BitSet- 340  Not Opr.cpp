#include <iostream>
#include <bitset>

using namespace std;

int main(void) {
   bitset<10> b("00111000");

   cout << ~b << endl;

   return 0;
}
