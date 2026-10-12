#include <bits/stdc++.h>
using namespace std;

int main () {

  string base="this is a test string.";
  string str2="n example";
  string str3="sample phrase";
  string str4="useful.";

  // replace signatures used in the same order as described above:

  // Using positions:                 0123456789*123456789*12345
  string str=base;           // "this is a test string."
  str.replace(9,5,str2);          // "this is an example string." (1)
  cout << "result 01 = " << str << '\n';

  str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
  cout << "result 02 = " << str << '\n';

  str.replace(8,10,"just a");     // "this is just a phrase."     (3)
  cout << "result 03 = " << str << '\n';

  str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
  cout << "result 04 = " << str << '\n';

  str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)
  cout << "result 05 = " << str << '\n';

  // Using iterators:                                               0123456789*123456789*
  str.replace(str.begin(),str.end()-3,str3);                    // "sample phrase!!!"      (6)
  cout << "result 06 = " << str << '\n';

  str.replace(str.begin(),str.begin()+6,"replace");             // "replace phrase!!!"     (7)
  cout << "result 07 = " << str << '\n';

  str.replace(str.begin()+8,str.begin()+14,"is coolness",7);    // "replace is cool!!!"    (8)
  cout << "result 08 = " << str << '\n';

  str.replace(str.begin()+12,str.end()-4,4,'o');                // "replace is cooool!!!"  (9)
  cout << "result 09 = " << str << '\n';

  str.replace(str.begin()+11,str.end(),str4.begin(),str4.end());// "replace is useful."    (10)
  cout << "result 10 = " << str << '\n';

  return 0;
}
