
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector
using namespace std ;

bool myfunc (int i) { return ( (i>0) && (i%2 == 0)); }

int main () {
  vector<int> myvector { 41,-2,63,43, -55, 66,71,80,-9,-51,52, 93};

  int mycount = count_if (myvector.begin(), myvector.end(), myfunc );

  cout << "myvector¿¡ ÀÖ´Â È¦¼öÀÇ °¹¼ö´Â : " << mycount ;

  return 0;
}

