#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.precision(10) ;

	for(int i=1 ; i<10 ; i++){
        for(int j=1; j< 10 ; j++ ){
            cout << "\n pow(" << i <<" , " << j << ")= " << pow(i,j) ;
        }
	}

	for(int i=1 ; i<10 ; i++){
        for(int j=1; j< 10 ; j++ ){
            cout << "\n sqrt("<< i <<" + " << j << ")= " << sqrt(i+j) ;
        }
	}


	return 0;
}
