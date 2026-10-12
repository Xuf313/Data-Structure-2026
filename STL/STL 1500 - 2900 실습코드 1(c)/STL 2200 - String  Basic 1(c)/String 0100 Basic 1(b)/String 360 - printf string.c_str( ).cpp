#include <iostream>
#include <string>
#include <stdio.h>

int main(){

    using namespace std;

    string myString = "Viva PNU CSED!";

    // C++ string은 일반적은 printf의 %s로 출력은 불가능하다.
    // 따라서 반드시 c_str(), C style의 %s 문자열로 바꾸어서야 한다.

    cout <<  "  cout myString = " << myString << endl;

    printf("\n myString = %s", myString ); // 원하지 않는 결과가 나옴
    printf("\n myString.c_str() = %s", myString.c_str()); //note the use of c_str
    cin.get();

    cout << "참 잘했어용 " ;

    return 0;
}

// 여기를 참조 https://modoocode.com/292
