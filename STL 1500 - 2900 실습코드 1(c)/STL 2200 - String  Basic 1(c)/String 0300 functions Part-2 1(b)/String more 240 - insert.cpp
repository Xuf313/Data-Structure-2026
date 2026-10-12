#include <bits/stdc++.h>
using namespace std;



int main () {

  string str="to be question";
  string str2="the ";
  string str3="or not to be";
  string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  cout << "result 01 = " << str << '\n';

  str.insert(6,str3,3,4);             // to be (not )the question
  cout << "result 02 = " << str << '\n';

  str.insert(10,"that is cool",8);    // to be not (that is )the question
  cout << "result 03 = " << str << '\n';

  str.insert(10,"to be ");            // to be not (to be )that is the question
  cout << "result 04 = " << str << '\n';

  str.insert(15,1,':');               // to be not to be(:) that is the question
  cout << "result 05 = " << str << '\n';

  it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
  cout << "result 06 = " << str << '\n';

  str.insert (it+2,str3.begin(),str3.begin()+3); // (or )
  cout << "result 07 = " << str << '\n';

  cout << "result 08 = " << str << '\n';
  return 0;
}
