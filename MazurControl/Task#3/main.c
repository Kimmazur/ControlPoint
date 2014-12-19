#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int amountOfSpacesLeft = 1/*N.B!*/, amountOfSpacesBetween = n - 2;
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

        printf("%*c\n", amountOfSpacesLeft, 'y');//пераблыталі і забылі перавод радку
        // а дзе памяншенне k?
    }
    while(k>=0);

    return 0;
}
