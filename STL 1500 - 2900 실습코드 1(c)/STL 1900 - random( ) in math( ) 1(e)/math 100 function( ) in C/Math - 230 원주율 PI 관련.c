#include <stdio.h>
#define  _USE_MATH_DEFINES
#include <math.h>


int main(void) {

    printf("%f\n", M_PI);     // 3.141593
    printf("%.16f\n", M_PI);  // 3.1415926535897931
    printf("%.32f\n", M_PI);  // 3.1415926535897931
    //  M_PI                  // 3.14159265358979323846

  return 0;
}
