// unordered_multimap::begin/end example
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std ;

int main () {

   unordered_multimap<std::string,std::string> myumm = {
        {"apple","red"},
        {"apple","green"},
        {"orange","orange"},
        {"strawberry","red"},
        {"pepper","red"},  {"pepper","green"}
    };

   cout << "myumm contains:";
    for ( auto it = myumm.begin(); it != myumm.end(); ++it )
       cout << " " << it->first << ":" << it->second;
   cout <<endl;

   cout << "myumm's buckets contain:\n";
    for ( unsigned i = 0; i < myumm.bucket_count(); ++i) {
       cout << "bucket #" << i << " contains:";
        for ( auto local_it = myumm.begin(i); local_it!= myumm.end(i); ++local_it )
           cout << " " << local_it->first << ":" << local_it->second;
       cout <<endl;
    }

    return 0;
}
