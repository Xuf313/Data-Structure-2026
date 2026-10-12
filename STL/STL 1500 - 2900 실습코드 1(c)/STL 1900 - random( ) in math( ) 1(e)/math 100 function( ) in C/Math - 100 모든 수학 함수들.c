

/*
1 double acos(double x) : Returns the arc cosine of x in radians.
2 double asin(double x) : Returns the arc sine of x in radians.
3 double atan(double x) : Returns the arc tangent of x in radians.
4 double atan2(double y, double x)
5 double cos(double x)
6 double cosh(double x) : Returns the hyperbolic cosine of x.
7 double sin(double x)
8 double sinh(double x) : Returns the hyperbolic sine of x.
9 double tanh(double x) : Returns the hyperbolic tangent of x.

10 double exp(double x) : Returns the value of e raised to the xth power.
11 double frexp(double x, int *exponent) : The returned value is the mantissa and the integer pointed to by exponent is the exponent. The resultant value is x = mantissa * 2 ^ exponent.
12 double ldexp(double x, int exponent) : Returns x multiplied by 2 raised to the power of exponent.
13 double log(double x) : Returns the natural logarithm (base-e logarithm) of x.
14 double log10(double x) : Returns the common logarithm (base-10 logarithm) of x.

15 double modf(double x, double *integer) : The returned value is the fraction component (part after the decimal), and sets integer to the integer component.
16 double pow(double x, double y) : Returns x raised to the power of y.
17 double sqrt(double x) : Returns the square root of x.

18 double ceil(double x) : Returns the smallest integer value greater than or equal to x.
19 double fabs(double x) : Returns the absolute value of x.
20 double floor(double x) : Returns the largest integer value less than or equal to x.

21 double fmod(double x, double y) : Returns the remainder of x divided by y.

*/

#include <stdio.h>
#include <math.h>

int main(void) {


    int i ;
    double dt ;
    printf(" 로그(Log)값을 math.h로 출력해보자. \n");
    for (i=1 ;i <=124 ;i++ ) {
        dt = (double) i ;
         printf("\n log2(%3d) = %.6f, log10(%3d)=%.6f", \
               i, log2( (double)i ), i, log10( (double)i));
    }

  return 0;

}
