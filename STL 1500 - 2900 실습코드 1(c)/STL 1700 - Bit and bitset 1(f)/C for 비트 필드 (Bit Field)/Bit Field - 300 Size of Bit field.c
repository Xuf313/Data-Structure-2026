#include <stdio.h>

struct info1 {
    int num;
};

struct info2 {
    int num : 10 ;
};

void main() {

    struct info1 f1;
    struct info2 f2;


    printf("\n Size of info1 is : %d", sizeof( f1 ));
    printf("\n Size of info2 is : %d", sizeof( f2 ));

}
