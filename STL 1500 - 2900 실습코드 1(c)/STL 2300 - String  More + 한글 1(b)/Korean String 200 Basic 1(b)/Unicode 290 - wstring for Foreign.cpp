/*
  wchar_t는 unsigned short입니다. char은 데이터 사이즈가 작다보니 표현할 수 있는
  문자에도 한계가 있기 때문에, 표현해야 할 문자가 많을 때 비교적 선택의 폭이
  넓은 wchar_t를 사용한다고 합니다.
  일반 영어 알파벳은 char을 사용해서 표현할 수 있지만, 한글, 러시아어 등등의
  세계어를 표현해야 할 땐 wchar_t를 사용한다고 합니다.
*/

#include <iostream>
#include <cstddef>
#include <iostream>
#include <locale>

int main(void){

		const std::wstring texts[] =
		{
			L"Ñá", //Spanish
			L"forêt intérêt",  //French
			L"Gesäß",  //German
			L"取消波蘇日奇諾",  //Chinesse
			L"日本人のビット",  //Japanese
			L"немного русский",  //Russian
			L"ένα κομμάτι της ελληνικής",  //Greek
			L"ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ",  //Punjabi
			L"کمی از ایران ", //Persian
			L"కానీ ఈ ఏమి నరకం ఉంది?", //Telugu
			L"Но какво, по дяволите, е това?" //Bulgarian
		};

		std::locale::global(std::locale(""));
		std::wcout.imbue   (std::locale());

		for (size_t i = 0; i < 11; ++i)
			std::wcout << "\n" <<  i << ":= " << texts[i] << std::endl;

}




