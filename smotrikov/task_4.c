#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r,V,S;
    double p = 3.14;
    printf("ENTER radius=");
    scanf("%lf",&r);
    V = (4.0*p*r*r*r)/3.0;
    S = 4.0*p*r*r;
    printf("Your V=%.5f\n",V);
    printf("Your S=%.5f\n",S);
    return 0;
}
