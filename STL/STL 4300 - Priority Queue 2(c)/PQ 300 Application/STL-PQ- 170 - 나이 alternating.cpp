#include <bits/stdc++.h>
using namespace std;

int G ;

struct mycomp {  // private compare function
    bool operator()(const int& left, const int& right) {
       // cout << "\n => G = " << G ;
        if( G%2 == 0 ) return left > right ;
        else return left < right ;

    }
};

int main() {
  int i, thedata[] = { 45, 23, 11, 6, 27, 71, 9, 30, 62, 99, 63, 34, 90, 32 };

  priority_queue<int, vector<int>, mycomp > Room(thedata, thedata+12) ;

  G = Room.size() ;
  while (!Room.empty()) {
    cout << " 끝까지 뽑아내기 " << setw(4) << Room.top() << endl;
    Room.pop();
    G-- ;
    // cout << "\n G = " << G ;
  } // end of while ( )

  cout << "\n 모두 뽑아낸 뒤의 pq size =  " << Room.size()   << endl;
  return 0;

} // end of main( )

