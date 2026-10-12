#include <stdio.h>

struct test {
    unsigned int x;
    unsigned int y: 13;
    unsigned int z;
};

int main() {

    printf("%d", sizeof(struct test));
    return 0;
}



