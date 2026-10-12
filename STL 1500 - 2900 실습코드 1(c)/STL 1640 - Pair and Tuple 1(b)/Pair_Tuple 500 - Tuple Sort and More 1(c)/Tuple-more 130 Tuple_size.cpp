
#include <tuple>
#include <iostream>
#include <string>
using namespace std ;

struct ITEM {
    int nID;
    string name ;
};

int main() {
    ITEM item;

    item.nID = 10001;
    item.name = "팽길탄" ;


   tuple<int,string, ITEM> UserItem = make_tuple (1, "jacking", item);
   tuple<int,string, int, string> PNUid = make_tuple (2020, "컴공", 3456, "자료구조");

   auto nCount = tuple_size< decltype(UserItem)>::value;

   cout << "tuple UserItem의 ncount : " << nCount <<endl;
   nCount = tuple_size< decltype( PNUid )>::value;
   cout << "tuple PNUid의 ncount : " << nCount <<endl;

    return 0;
}

