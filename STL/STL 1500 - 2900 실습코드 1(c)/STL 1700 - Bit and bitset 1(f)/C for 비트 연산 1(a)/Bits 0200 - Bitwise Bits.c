#include <stdio.h>
int main() {

   int a = 12, b = 25;
    printf("\n & AND Operation = %d", a&b);
    printf("\n | Or Operation = %d", a|b);
    printf("\n ^ Exclusive Operation = %d", a^b);
    printf("\n ~ Complement Operation = %d",~35);
    printf("\n 음수의 complement = %d ",~-12);

    printf("\n\n Bit Shifting 연산자의 결과\n " );
    int num=212, i;
    for (i=0; i<=2; ++i)
        printf("\n Right shift by %d: %d", i, num>>i);

     printf("\n");

     for (i=0; i<=2; ++i)
        printf("\n Left shift by %d: %d", i, num<<i);


    return 0;



}
