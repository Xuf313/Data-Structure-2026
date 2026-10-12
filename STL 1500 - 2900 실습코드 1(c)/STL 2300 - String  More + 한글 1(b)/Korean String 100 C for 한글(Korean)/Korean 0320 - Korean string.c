#include <stdio.h>
#include <string.h>

int main () {

   char kor[50]="엄마야 누나야 강변살자" ;
   char c , kone[10];


   printf("\n kor= %s, its length=%d"   , kor, strlen( kor )  );
   printf("\n 첫문자 = %c%c", kor[0], kor[1]) ;

   strncpy( kone, kor, 4 );  // 4문자이므로 한글로 보면 2글자이다.
   printf("\n 첫 두문자 = %s", kone) ;



   return(0);
}
