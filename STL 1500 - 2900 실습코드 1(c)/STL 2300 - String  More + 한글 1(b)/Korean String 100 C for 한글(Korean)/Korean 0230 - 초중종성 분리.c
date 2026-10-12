#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

int main(void) {

 setlocale(LC_ALL, "Korean");
 WORD in_char, in_cho, in_jung, in_jong;
 WORD result;

 char *msg = " 한글 1 글자 입력 : " ;
 printf("\n Input One Korean Letter : " ) ;
 wscanf(L"%c", &in_char);

 // 초중종성 분해
 in_char = in_char - 0xAC00;

 //in_cho = in_char / (21 * 28);
 in_cho = in_char / (0x0015 * 0x001C);

 //in_jung = (in_char / 28) % 21;
  in_jung = (in_char / 0x001C) % 0x0015;

 //in_jong = in_char % 28;
 in_jong = in_char % 0x001C;


 // 초`중`종성 print
 if ( in_jong == 0 ) //종성이 없는 경우
  wprintf(L"%c => %c , %c\n", in_char + 0xAC00, in_cho + 0x1100, in_jung + 0x1161);
 else
  wprintf(L"%c => %c , %c , %c\n", in_char + 0xAC00, in_cho + 0x1100, \
                                  in_jung + 0x1161, in_jong + 0x11A7);
}
