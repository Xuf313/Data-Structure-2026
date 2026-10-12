//C++ code to demonstrate working of lexical_cast()
#include<iostream>
#include <boost/lexical_cast.hpp>// for lexical_cast()
#include <string> // for string
using namespace std;

int main() {
   string str = "54321";
   string str1 = "654.7654321423";


   float f_value = boost::lexical_cast<float>(str1);
   int   i_value = boost::lexical_cast<int>(str);

   cout << "The float value after casting is : ";
   cout << f_value <<endl;
   cout << "The int value after casting is : ";
   cout << i_value <<endl;

   return 0;
}
