#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char symbol = 'Y';
    do
    {
        printf("Enter the odd number: ");
        scanf("%d", &number);
    } while (number%2 == 0);
    int amountOfLayers = 1, amountOfSpacesLeft = 0, amountOfSpacesBetween = number - 2;
    while(amountOfSpacesBetween >= 1)
    {
        printf("%*s%c%*s%c\n", amountOfSpacesLeft, "", symbol, amountOfSpacesBetween, "", symbol);
        ++amountOfSpacesLeft;
        amountOfSpacesBetween -= 2;
        ++amountOfLayers;
    }
    amountOfSpacesLeft = number / 2;
    while(amountOfLayers <= number)
    {
        printf("%*s%c\n", amountOfSpacesLeft, "", symbol);
        ++amountOfLayers;
    }
    return 0;
}
