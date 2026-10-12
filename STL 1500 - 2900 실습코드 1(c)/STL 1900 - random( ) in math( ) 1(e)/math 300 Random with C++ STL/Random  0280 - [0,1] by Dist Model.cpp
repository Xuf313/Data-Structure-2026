#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
using namespace std ;

int main() {
    random_device rd;


    mt19937 e2(rd());
    //knuth_b e2(rd());
    //default_random_engine e2(rd()) ;

    uniform_real_distribution   <> dist(1, 100); //[1,100] 사이의 값.
    //normal_distribution       <> dist(2, 2);
    //student_t_distribution    <> dist(5);
    //poisson_distribution      <> dist(2);
    //extreme_value_distribution<> dist(0,2);


    for (int i = 1; i <= 100; ++i) {
        printf("\n i = %3d, %15.10f ", i, dist(e2) ) ;
    }



    map<int, int> hist;
    int Count = 10000 ;
    for (int n = 0; n < Count ; ++n) {
        ++hist[floor(dist(e2))];
    }

    cout << "\n\n [histgram을 가로로 보여줍니다.] \n " << endl ;

    for (auto p : hist) {
        cout << fixed << setw(2) << p.first << ": "
        << setw(3) << p.second<< " " << string(p.second/10, '*') << '\n';
    }


} // end of main
