#include <bitset>
#include <string>
#include <iostream>
using namespace std ;

int main() {

    bitset<8> Mymy;  //Mymy	[8](0,0,0,0,0,0,0,0)	std::Mymyset<8>
    Mymy.set();      //Mymy	[8](1,1,1,1,1,1,1,1)	std::Mymyset<8>
    Mymy.reset();    //Mymy	[8](0,0,0,0,0,0,0,0)	std::Mymyset<8>

    int asize = (int)Mymy.size(); // 할당 된 비트 수. //Mymysize	8

    // 세트 된 비트 존재 여부 감사
    bool bAny = Mymy.any();      //bAny	false	bool
    bool bNone = Mymy.none();    //bNone	true	bool

    // 첫 번째, 세 번째 비트 할당
    Mymy.set( 0, true );     //Mymy	[8](1,0,0,0,0,0,0,0)	std::Mymyset<8>
    Mymy.set( 2, true );     //Mymy	[8](1,0,1,0,0,0,0,0)	std::Mymyset<8>
    cout << "\n No.3 = " << Mymy ;

    // 다섯 번째 비트 반전
    Mymy.flip( 4 );          //Mymy	[8](1,0,1,0,1,0,0,0)	std::Mymyset<8>
    cout << "\n No.4 = " << Mymy ;

    // 모든 비트 반전
    Mymy.flip();             //Mymy	[8](0,1,0,1,0,1,1,1)	std::Mymyset<8>
    cout << "\n No.5 = " << Mymy ;

    bool bFlag = Mymy.test( 3 ); // 네 번째 비트 검사
    bFlag = Mymy[ 5 ];           // 여섯 번째 비트 감사

    cout << "\n No.6  bFlag = " << bFlag ;
    bAny = Mymy.any();           // 세트 된 비트 존재 여부 감사
    bNone = Mymy.none();         //bNone	false	bool
    int setcount = (int)Mymy.count(); // 세트 된 비트 수, //setcount	5	int
    cout << "\n No.6  setcount = " << setcount ;

    // 값 할당,
    Mymy = 0x01;  //Mymy	[8](1,0,0,0,0,0,0,0)	std::Mymyset<8>
    Mymy = 0xF0;  //Mymy	[8](0,0,0,0,1,1,1,1)	std::Mymyset<8>
    cout << "\n No.7 = " << Mymy ;

    // 문자로 변환
    string strMymys = Mymy.to_string(); //strMymys	"11110000"

    cout << "\n No.8 strMymys= " << strMymys ;

    // 숫자로 변환
    int    nMymyVal = Mymy.to_ulong(); //nMymyVal	240
    cout << "\n No.9 nMymyVal = " << nMymyVal ;

} // end of main() 1

