#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.141596654

int main()
{
    double r, V, S;
    printf("Type 'r':\n");
    scanf("%lf",&r);
    double rsquare, rcube;
    rsquare=r*r;
    rcube=r*r*r;
    V=(4/3)*M_PI*rcube;// 4/3 цэлалікавае дзяленне, таму памылка
    S=4*M_PI*rsquare;
    printf("\t\tV = %g\n\t\tS = %g", V, S);

    return 0;
}
