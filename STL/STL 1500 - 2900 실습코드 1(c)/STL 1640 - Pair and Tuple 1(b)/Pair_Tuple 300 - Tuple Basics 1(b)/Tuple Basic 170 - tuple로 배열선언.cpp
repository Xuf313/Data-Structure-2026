#include <iostream>
#include <tuple>
using namespace std;

typedef tuple<int, double, string> my_triple ;

int main(){

   array< my_triple, 10 > Tarray ;
   my_triple temp1, temp2 ;

   temp1 = make_tuple (2025, 3.1, "Pusan");
   temp2 = make_tuple (2026, 53.31, "Jeju");
   Tarray[0] = temp1 ;
   Tarray[1] = temp2 ;

   cout << "Out 0: " <<  get<0>( Tarray[0] ) << endl ;
   cout << "Out 1: " <<  get<1>( Tarray[1] )  << endl;
   cout << "Out 2: " <<  get<2>( Tarray[1] ) << endl ;

}
