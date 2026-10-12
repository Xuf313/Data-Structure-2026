#include <iostream>
#include <bitset>
#include <iostream>
using namespace std;

int main(void) {

   bitset<14> mybit;

   cout << "1. 초기 배정 mybit[] = " << mybit << endl;

   mybit[11] = 1;
   mybit[10] = 1;
   mybit[ 3] = 1;

   cout << "2. 조정 이후의 mybit[] = " << mybit << endl;

   for (size_t i = 0; i < mybit.size(); ++i) {
        cout << mybit[i] ;
   }
   return 0;
}
