#include <stdio.h>


int main () {


    typedef struct{
        int value;
        int otherValue;
    } s;

    s test = {.value = 15, .otherValue = 16};

    printf("\n test.value = %d ", test.value ) ;

    int i, a[30] = {1,2, [10]=3,4,5, [23]= 6,7 };

    for(i=0 ; i <30 ; i++) {
        if(i % 10 == 0) printf("\n") ;
        printf(" %2d", a[i]) ;

    }

    return 0;
}
