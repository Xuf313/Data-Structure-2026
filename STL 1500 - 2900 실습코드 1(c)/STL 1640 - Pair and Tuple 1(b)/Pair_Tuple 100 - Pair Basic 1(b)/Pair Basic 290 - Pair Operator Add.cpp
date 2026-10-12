#include <utility>
#include <iostream>
using namespace std ;

pair<int,int> operator+(const pair<int,int> &a ,const  pair<int,int> &b )     {
        return make_pair(a.first+b.first,a.second+b.second);
}


int main () {

    pair<int, int> a = make_pair(1,2);
    pair<int, int> b = make_pair(3,3);
    pair<int, int> c = a + b;

    cout<< "c= " << c.first<<" , "<<c.second;

    return 0;
}
