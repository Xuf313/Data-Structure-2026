#include <bits/stdc++.h>
using namespace std;

main () {

  string buyer ("money");
  string seller ("goods");

  cout << "Before the swap, buyer has " << buyer;
  cout << " and seller has " << seller << '\n';

  seller.swap (buyer);

  cout << " After the swap, buyer has " << buyer;
  cout << " and seller has " << seller << '\n';

  return 0;
}
