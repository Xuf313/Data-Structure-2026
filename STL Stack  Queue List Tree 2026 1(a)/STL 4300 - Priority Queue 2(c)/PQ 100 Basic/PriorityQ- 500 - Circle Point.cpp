#include <bits/stdc++.h>
using namespace std;

typedef pair <int,int> Point ;

bool mycmp( Point u, Point v ){
     return ( u.first*u.first + u.second*u.second > \
              v.first*v.first + v.second*v.second ) ;
}

int main(){
    Point pa ;
	priority_queue< Point, vector<Point>, mycmp > Circle;

	for (auto w : { make_pair(2, 5), make_pair(7,1),\
                    make_pair(5, 6), make_pair(3,7) }){
          Circle.push(w) ;
    }
	cout << "Circle top : " << Circle.top().first << '\n';


	while(!Circle.empty()){
		cout << Circle.top.first <<  "  : " << Circle.top.second ;
		Circle.pop();
	}

	return 0;

} // end of main()


