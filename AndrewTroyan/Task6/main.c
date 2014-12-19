#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber, min, max;
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    max = firstNumber > secondNumber? firstNumber : secondNumber;
    min = secondNumber < firstNumber? secondNumber : firstNumber;
    for(int i = min; i < max; ++i)
    {
        for(int k = 1, j = 1; k <= (max - i); ++k, ++j)
        {
            printf("(%d, %d), ", i, i + j);
        }
    }
    printf("\b\b.");
    return 0;
}
