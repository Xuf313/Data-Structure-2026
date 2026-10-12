#include <stdio.h>
#include <string.h>
#define  SKIP   printf("\n")
#include <math.h>

int Three_Sign(int x ){

    return( (x>0) - (x<0) ) ;
}

int main() {


int i, p ;
    for(i=0 ; i <= 30  ; i++){
        p = rand( )%6 - 3 ;
        printf("\n Three_Sign( %3d )= %3d", p, Three_Sign(p)) ;
    }
}
