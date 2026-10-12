#include <bitset>
#include <string>
#include <iostream>
using namespace std ;

int main() {

    bitset< 8> Mymy;  //Mymy	[8](0,0,0,0,0,0,0,0)	std::Mymyset<8>
    bitset<20> Her;
    Mymy.set();      //Mymy	[8](1,1,1,1,1,1,1,1)	std::Mymyset<8>
    Mymy.reset();    //Mymy	[8](0,0,0,0,0,0,0,0)	std::Mymyset<8>

    int asize = (int)Mymy.size(); // 할당 된 비트 수. //Mymysize	8

    cout << "\n Mymy의 물리적 크기(bytes) = " << sizeof(Mymy) ;
    cout << "\n Mymy가 사용하는 내부 비트 필드수 = "  << asize ;

    cout << "\n Her의 물리적 크기(bytes) = " << sizeof(Her) ;
    cout << "\n Her가 사용하는 내부 비트 필드수 = "  <<(int)Her.size() ;


} // end of main() 1

