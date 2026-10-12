#include <iostream>
#include <boost/lexical_cast.hpp>

using namespace std;

int main() {
   int    i = 123456;
   double f = 5678.987654 ;

   string istr = boost::lexical_cast<string>(i);
   string fstr = boost::lexical_cast<string>( f );

   cout<<" By lexical_cast : integer i is : "<< istr<<"\n";
   cout<<" By lexical_cast : float   f is : "<< fstr<<"\n";
}
