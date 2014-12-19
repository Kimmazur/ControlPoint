#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int amountOfSpacesLeft = 0, amountOfSpacesBetween = n - 2;
    int i = 0;
    do
    {
        printf("%*c%*s%c\n", amountOfSpacesLeft, 'y', amountOfSpacesBetween, " ", 'y');
        ++amountOfSpacesLeft ;
        amountOfSpacesBetween-=2;
        ++i;
    }
    while(amountOfSpacesBetween>0);
    int k;
    k=n/2;
    do
    {

        printf("%*c%s", amountOfSpacesLeft, 'y');
    }
    while(k>=0);

    return 0;
}
