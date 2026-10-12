#include <bits/stdc++.h>
using namespace std;


int main() {


   const pair<int,int> vals[6] = {  make_pair(1, 0), make_pair(3, 2),
                                    make_pair(2, 0), make_pair(0, 8),
                                    make_pair(6, 3), make_pair(3, -1)};

   vector<pair<int, int> > vec1 (&vals[0], &vals[0] + 5);


   for(auto w: vec1 ){
        cout << "\n vec1 (" << w.first << ", " << w.second << ")";
   }

   cout << "\n\n After Sorting -\n\n" ;
   sort( vec1.begin(), vec1.end() ) ;
   for(auto w: vec1 ){
        cout << "\n sorted vec1 (" << w.first << ", " << w.second << ")";
   }


} // end of main( )
