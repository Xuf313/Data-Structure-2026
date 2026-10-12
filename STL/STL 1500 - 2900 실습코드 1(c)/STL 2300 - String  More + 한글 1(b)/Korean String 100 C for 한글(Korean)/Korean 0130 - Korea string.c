/* atof example: sine calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <string.h>


int main () {

  char *s ;

  s= "Wow! 이것은 한글이다." ;


  printf("\n s = %s", s ) ;
  printf("\n size of s  = %d", sizeof(s) ) ;
  printf("\n length of s  = %d", strlen(s) ) ;
  printf("\n s[0] = %c", s[0] ) ;
  printf("\n s[10] = %c", s[10] ) ;

  return 0;
}
