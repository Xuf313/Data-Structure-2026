#include <stdio.h>
#include <stdlib.h>

int main(void) {

int c, num, num1;
double num3;

    printf("10 integers random numbers:\n");

    for(c = 0; c < 10; c++) printf("%d ", rand());
    printf("\n");

    // num has a value between 0 and 99
    num = rand() % 100;
    printf("\nRandom number less than 100 = %d\n", num);

    // using lower bound and upper bound
    num1 = 200 + (rand()/(700 - 200));
    printf("\nRandom number between 200 and 700 = %d\n", num1);

    // floating-point random numbers...
    num3 = rand()/33000.0;
    printf("\nfloating-point random number = %f\n", num3);

    // floating-point random numbers...
    printf("\nAnother floating-point random numbers:\n");
    for(c = 0; c <10; c++)  printf("%f\n", rand()/33000.0);

    return 0;

} // end of main( )
