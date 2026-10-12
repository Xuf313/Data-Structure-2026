#include <stdio.h>



int main () {

enum state {
    stopped = 'STOP',
    running = 'RUN!',
    waiting = 'WAIT',
};
    int x ;
    x = 'ABCD';
    printf("\n x = %d", x ) ;

    x = 'FFFF';
    printf("\n x = %d", x ) ;
    return 0;
}
