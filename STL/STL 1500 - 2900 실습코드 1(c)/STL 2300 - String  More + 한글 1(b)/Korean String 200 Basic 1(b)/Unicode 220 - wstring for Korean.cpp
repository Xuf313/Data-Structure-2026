#include <codecvt>
#include <locale>
#include <cstdio>
#include <string>
#include <windows.h>
#include <iostream>

using std::wstring_convert;
using std::codecvt_utf8;
using std::wstring;

int main() {
    wstring_convert<codecvt_utf8<wchar_t>, wchar_t> cv;
    const char* s = u8"file.txt";
    wstring filename = cv.from_bytes(s);

    wchar_t buffer[256];
    MultiByteToWideChar(CP_UTF8, 0, s, -1, buffer, 256);

    std::cout << "\n for (wchar_t c : filename) \n" ;
    for (wchar_t c : filename) {
        printf("%d ", (int)c);
    }   printf("\n");

    std::cout << "\n\n  for (int i = 0; buffer[i] != 0; ++i) \n" ;
    for (int i = 0; buffer[i] != 0; ++i) {
        printf("%d ", (int)buffer[i]);
    }   printf("\n");

    return 0;
}

