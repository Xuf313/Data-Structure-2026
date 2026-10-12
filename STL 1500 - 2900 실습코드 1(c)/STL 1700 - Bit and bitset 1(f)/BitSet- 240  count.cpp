#include <iostream>
#include <bitset>

using namespace std;

int main(void) {

   bitset<10> b("1011010110");

   cout << "In bitset " << b << endl ;
   cout <<  b.count() << " bits are set to 1." << endl;

   return 0;
}
