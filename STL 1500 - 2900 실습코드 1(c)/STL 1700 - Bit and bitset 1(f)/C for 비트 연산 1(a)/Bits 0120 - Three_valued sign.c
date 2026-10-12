#include <stdio.h>
#include <string.h>
#define  SKIP   printf("\n")
#include <math.h>

int threeval(int x, int y ){

    return( (x>y) - (x<y) ) ;
}

int main() {


int i ;
    for(i=0 ; i <= 30  ; i++){
        { int p, q ;
            p = rand( )%6 ;
            q = rand( )%6 ;
            printf("\n threeval( %d , %d )= %3d", p, q, threeval(p,q)) ;
        }

    }
}
