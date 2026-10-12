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
  priority_queue< list<int>, deque<list<int>>, compare > ReportPQ ;

  list<int> v1 { 10,  8,  9 } ;
  list<int> v2 {  4,  5,  8, 9 } ;
  list<int> v3 {  2,  3,  7, 8, 5, 8, 9 } ;
  list<int> v4 {  5,  8,  9 } ;
  list<int> v5 {  4,  8,  9, 8 } ;
  list<int> v6 { 10,  10 } ;
  list<int> v7 {  5,  7,  2, 9, 5} ;
  list<int> v8 { 10, 10,  1 } ;

  ReportPQ.push(v1);  ReportPQ.push(v2);  ReportPQ.push(v3);
  ReportPQ.push(v4);  ReportPQ.push(v5);  ReportPQ.push(v6);
  ReportPQ.push(v7);  ReportPQ.push(v8);



  int i = 0 ;
  string title ;
  while( !ReportPQ.empty()){
    tvec = ReportPQ.top() ;
    i++ ;
    title = "Report-"+ to_string(i) ;
    allout ( title , tvec ) ;
    ReportPQ.pop() ;
  }

}
