#include <iostream>
using namespace std;

#define X 30    //macro definition
#define M "부산대학교 컴퓨터공학과/AI_전공"
const int Y = 10; //global integer constantt

int main() {

	const  int Z = 30; //local ineteger constant`
	char   *PNU ;

	PNU = "부산대학교 컴퓨터공학과/컴퓨터공학 전공" ;

	cout<<"Value of X:  "<< X <<endl;
	cout<<"Value of Y:  "<< Y <<endl;
	cout<<"Value of Z:  "<< Z <<endl;
	cout<<"Value of M:  "<< M <<endl;
	cout<<"Value of PNU:  "<< PNU <<endl;

	return 0;
}
