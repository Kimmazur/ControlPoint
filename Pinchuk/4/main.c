#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.141592

int main()
{
    double r;
    printf("Input radius: ");
    scanf("%lf",&r);
    printf("V = %.3f\n", M_PI*4/3*r*r*r);
    printf("S = %.3f\n", M_PI*4*r*r);
    return 0;
}

