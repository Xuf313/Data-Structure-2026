#include <stdio.h>
#include <string.h>

int main () {

   char str[60]="Good \0Boy Where are you!";
   char kor[50]="엄마야 누나야 강변살자" ;
   char c ;

   printf("\n str= %s, its length=%d"   , str, strlen( str)  );
   printf("\n str[0]= %c", str[0]) ;
   printf("\n str[1]= %c", str[1]) ;
   printf("\n str[9]= %c", str[9]) ;
   c = str[10] ;
   printf("\n Invisible str[10]= %c", str[10]) ;

   if ( str[10] =='\0') printf("\n\n Yes ending with \\0") ;
   else printf("\n\n  No, it does not ends with \\0") ;

   return(0);
}
