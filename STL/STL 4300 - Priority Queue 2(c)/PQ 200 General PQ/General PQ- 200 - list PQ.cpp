#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" :  ";for(auto w:X)cout<<w<<" "
using namespace std;

struct compare {  // private compare function
    bool operator()( list<int> &left,  list<int> &right ) {
        int suml, sumr ;
        suml = accumulate(  left.begin(),  left.end(), 0);
        sumr = accumulate( right.begin(), right.end(), 0);
        return suml  < sumr ;
    }
};

int main() {
  list<int> tvec ;
  priority_queue< list<int>, deque<list<int>>, compare > ListPQ ;

  list<int> v1 { 10,  8,  9 } ;
  list<int> v2 {  4,  5,  8, 9 } ;
  list<int> v3 {  2,  3,  7, 8, 5, 8, 9 } ;
  list<int> v4 {  5,  8,  9, 100 } ;
  list<int> v5 {  4,  8,  9, 8 } ;
  list<int> v6 { 10, 10, 10 } ;
  list<int> v7 {  5,  7,  2, 9, 5} ;
  list<int> v8 { 10,  1 } ;

  ListPQ.push(v1);  ListPQ.push(v2);  ListPQ.push(v3);
  ListPQ.push(v4);  ListPQ.push(v5);  ListPQ.push(v6);
  ListPQ.push(v7);  ListPQ.push(v8);



  int i = 0 ;
  string title ;
  while( !ListPQ.empty()){
    tvec = ListPQ.top() ;
    i++ ;
    title = "Report-"+ to_string(i) ;
    allout ( title , tvec ) ;
    ListPQ.pop() ;

  }


}
