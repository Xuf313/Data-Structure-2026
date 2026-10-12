// C program for generating a random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandoms(int lower, int upper,  int count) {
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        printf("\n random = %2d ", num);
    }
}

int main()  {
    int lower = 11, upper = 40, count = 10;

    printf("\n Random Numbers [%d ,%d ]:", lower, upper) ;
    srand(time(0));
    printRandoms(lower, upper, count);

    return 0;
}
