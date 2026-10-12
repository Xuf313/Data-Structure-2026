#include <iostream>
#include <string>
#include <locale>
#include <cstdlib>

using namespace std;

int main()  {

 //std::locale::global( std::locale( "kor" ) ); //"UTF-8") );
 std::cout << "Set locale to " << std::locale().name() << std::endl;

 std::wstring buffur = L"Summer 金延秀";
 wcout << buffur << endl;
 wchar_t * name =L"김연수";
 wcout << name;

 return 0;
}
