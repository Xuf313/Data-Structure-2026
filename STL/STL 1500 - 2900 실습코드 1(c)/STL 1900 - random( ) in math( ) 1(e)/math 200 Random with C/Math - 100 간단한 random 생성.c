#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// random( )는 아주 품질이 나쁜 생성기 이므로 가능하면 멀리 하시오.

int main () {
   int i, n;
   time_t t;

   n = 20;

   /* Seeding from 시스템 시계   */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) {
      printf("\n %2d random = %7d ", i, rand()%100000);
   }

   return(0);
}
