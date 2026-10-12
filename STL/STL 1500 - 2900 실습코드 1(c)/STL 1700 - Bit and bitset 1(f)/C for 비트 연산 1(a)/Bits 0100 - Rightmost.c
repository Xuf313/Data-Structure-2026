#include <stdio.h>
#include <string.h>
#define  SKIP   printf("\n")

// 원래 C에서는 bool이 지원되지 않습니다. 그러나 C99부터는 _Bool로 지원합니다.

_Bool power_zero(int x){
    return( !(x & (x-1)) ) ;
}

int turn_on_rightmost_0(int x){  //가장 오른쪽 0을 1로 바꿈,
    return( x | (x+1) );
}

int zero_trailing_1(int x){  //가장 오른쪽 0을 1로 바꿈, 10100111=> 1010000
    return( x & (x+1) );
}

/* 이렇게 해 봅시다.

x | (x-1) ; turn on the trailing 0's   10101000 => 10101111
!x & (x+1) ; 가장 오른쪽 0비트만 1로 바꿈.   10100111 => 00001000

!x & (x+1) : 가장 오른쪽 1비트만 0으로 바꿈, 10101000 => 11110111

!x & (x-1)
!(x|-x)
(x&-x)-1   : trainling 0의 시작의 1을 0으로 바꾸고 나머지는 모두 0
                 01011000 => 00000111

!x | (x+1) :  TRAILING 1의 0를 1로 바꾸고 나머지는 모두 1 10100111=> 11111000'

x & (-x)  : 가장 오른쪽 1만 남겨두고 나머지는 모두 0으로 10101000 => 00001000

x^(x-1) :   시작하는 0들을 1로 바꾸고 나머지는 모두 0
             01011000 => 00001111

x^(x+1)  : trailing 01111..1의 끝 0를  1로 바꾸고 나머지는 0
             01010111 => 00001111

((x&-x)+x)&x : 오른쪽 연속 1 묶음을 0으로 바꾸는 작업.
              010111000  => 01000000
*/
int main() {


    int num[10] = { 0, 1, 2, 11, 12, 15, 1021, 1022, 1023, 1024} ;
    for(int i=0 ; i<= 10; i++){
        printf( "\n power_zero( %4d ) = %2d", num[i], power_zero(num[i])) ;
    }
    SKIP  ;
    for(int i=0 ; i<= 10; i++){
        printf( "\n turn_on_rightmost_0( %4d ) = %2d", num[i], turn_on_rightmost_0(num[i])) ;
    }

    SKIP  ;
    for(int i=0 ; i<= 10; i++){
        printf( "\n zero_trailing_1( %4d ) = %2d", num[i], zero_trailing_1(num[i])) ;
    }
}
