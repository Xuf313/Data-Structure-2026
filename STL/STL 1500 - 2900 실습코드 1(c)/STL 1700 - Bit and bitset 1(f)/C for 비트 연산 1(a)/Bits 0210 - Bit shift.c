#include <stdio.h>

int main() {
 long number, tempnum;

 printf("Enter an integer: ");
 scanf("%ld",&number);
 tempnum = number;
 number = number << 2;   /*left shift by two bits*/

  printf("\n After 2 bits shifting %ld x 4 = %ld \n", tempnum,number);
}
