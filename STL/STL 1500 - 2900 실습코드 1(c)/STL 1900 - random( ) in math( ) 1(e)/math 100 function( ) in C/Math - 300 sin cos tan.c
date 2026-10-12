// Cos function returns consine of an angle (in radian)
#include <stdio.h>
#include <math.h>

int main(void) {
    int i,j ;
    double theta, x = 1.0471;

    theta= 0.33 ;
    for(i=1; i< 20; i++) {
        theta += 0.027 ;
        printf("\n sin(%.3f)=%f,    cos(%.3f)=%f", theta, cos(theta), theta, sin(theta) ) ;
    }


  return 0;
}
