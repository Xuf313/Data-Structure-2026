#include <bitset>
#include <string>
#include <iostream>
using namespace std ;

int main() {

    bitset<8> Mymy;  //Mymy	[8](0,0,0,0,0,0,0,0)	std::Mymyset<8>
    Mymy.set();      //Mymy	[8](1,1,1,1,1,1,1,1)	std::Mymyset<8>
    Mymy.reset();    //Mymy	[8](0,0,0,0,0,0,0,0)	std::Mymyset<8>

    int asize = (int)Mymy.size(); // 할당 된 비트 수. //Mymysize	8

    cout << "\n Mymy의 물리적 크기(bytes) = " << sizeof(Mymy) ;
    cout << "\n Mymy가 사용하는 내부 비트 필드수 = "  << asize ;

 // 세트 된 비트 존재 여부 감사
    bool bAny = Mymy.any();      //bAny	false	bool
    bool bNone = Mymy.none();    //bNone	true	bool

    // 0 번째, 2 번째 비트 할당
    Mymy.set( 0, true );     //Mymy	[8](1,0,0,0,0,0,0,0)	std::Mymyset<8>
    Mymy.set( 2, true );     //Mymy	[8](1,0,1,0,0,0,0,0)	std::Mymyset<8>

    // 다섯 번째 비트 반전
    Mymy.flip( 4 );          //Mymy	[8](1,0,1,0,1,0,0,0)	std::Mymyset<8>

    // 모든 비트 반전
    Mymy.flip();             //Mymy	[8](0,1,0,1,0,1,1,1)	std::Mymyset<8>
    cout << "\n Mymy = " <<  Mymy.to_string() ;

    bool bFlag = Mymy.test( 3 ); // 네 번째 비트 검사
    bFlag = Mymy[ 5 ];           // 여섯 번째 비트 감사
    bAny  = Mymy.any();           // 세트 된 비트 존재 여부 감사
    bNone = Mymy.none();         //bNone	false	bool
    int setcount = (int)Mymy.count(); // 세트 된 비트 수, //setcount	5	int

    // 값 할당,
    Mymy = 0x01;  //Mymy	[8](0,0,0,0,0,0,0,1)	std::Mymyset<8>
    Mymy = 0xF0;  //Mymy	[8](1,1,1,1,0,0,0,0)	std::Mymyset<8>

    // 문자로 변환
    string strMymys = Mymy.to_string(); //strMymys	"11110000"
    cout << "\n strMymys = " <<  strMymys ;

    // 숫자로 변환
    int    nMymyVal = Mymy.to_ulong(); //nMymyVal	240
    cout << "\n nMymyVal = " <<  nMymyVal  ;

} // end of main() 1

