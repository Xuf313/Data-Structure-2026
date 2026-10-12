#include <iostream>
#include <string>
#include <locale>
#include <cstdlib>

using namespace std;

int main()  {

 //locale::global( locale( "kor" ) ); //"UTF-8") );
 cout << "Set locale to " << locale().name() << endl;

 wstring buffur = L"Summer 金延秀";
 wcout << buffur << endl;
 wchar_t * name =L"김연수";
 wcout << name;

 return 0;
}
