#include <iostream>
#include <iomanip>

using namespace std;

#define Nstud 120
#define Ncourse 5

#define JULL(x) cout<<"\nProf.Cho> ";cout<<x;

char Grade[Nstud][Ncourse] ;
//char Grade[120][5] ;

int main() {

    int i ;

    for(i=0 ; i< Nstud ; i++){
        Grade[i][0] = 'B' ;
    }

    for(i=0 ; i< Nstud ; i++){
        // cout << setw(3) << i << setw(3) << Grade[i][0] << endl  ;
        JULL( i ) ;
    }

	return 0;
}
