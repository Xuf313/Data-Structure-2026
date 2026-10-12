#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int rand_int(void) {

  union {
    int i;
    unsigned char uc[sizeof (int)];
  } u;

  u.uc[sizeof (int)]= 0 ; //  모두를 양의 정수로 만듬
  for (size_t i = 0; i < sizeof (u.uc) -1 ; i++) {
    u.uc[i] = rand();
  }
  return u.i;
}


int main()
{
    int max_value = INT_MAX;

    printf("\n max value: %d" ,max_value);

    srand( 12345 );

    int i = 0;
    for(i; i< 50; i++)     {

        printf("%d\n",rand_int()%(max_value+1));   //this gives me unexpectedly low values
                                                   //unevenly distributed
    }
    return(0);
}
