#include <stdio.h>
#include <stdlib.h>

int main()
{   double r;
    printf("Enter number: \n");
    scanf("%lf",&r);
    printf("V=%f\n", 4*3.14*r*r*r/3);
    printf("S=%f\n",4*3.14*r*r);
    return 0;
}
