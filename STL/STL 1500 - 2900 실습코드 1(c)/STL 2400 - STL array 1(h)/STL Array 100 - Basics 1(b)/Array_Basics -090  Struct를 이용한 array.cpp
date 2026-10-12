#include <stdio.h>
#define N 5

struct Land {
    int x ;
    int y ;
    int noise ;
} ;

struct Land  my[ N ][ N ]   = { { {1,2,3}, {5,6,7} }, { }, {{-5,-6,-7}, {15,16,17} }  };
int    i, j;

void show_Land() {
    printf("\n Displaying Land \n");

    for(i = 0; i < N ; i++) {
        for( j = 0; j < N ; j++) {
           printf("\n (%d, %d), Land: %d %d", i, j, my[i][j].x, my[i][j].noise );
        } // end of i
    } // end of j
} // end of show_Land( )

int main() {
   show_Land();
}
