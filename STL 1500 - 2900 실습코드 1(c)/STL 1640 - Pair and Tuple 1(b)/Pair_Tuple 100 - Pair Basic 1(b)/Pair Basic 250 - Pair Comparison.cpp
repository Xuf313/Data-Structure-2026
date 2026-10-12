#include <tuple>
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std ;

bool mycomp (pair<int,int> a, pair<int,int> b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first > b.first;
    }


int main() {
  pair <int,int> p1, p2, p3, p4 ;

  p1 = make_pair( 35, 61);
  p2 = make_pair( 23, 45);
  p3 = make_pair( 23, 61);

  return 0;

} // end of main( )
