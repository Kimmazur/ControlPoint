#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, doubleFactorial = 1;
    do
    {
        printf("Enter the number n > 0: ");
        scanf("%d", &number);
    } while(number <= 0);

    while (number >= 1)
    {
        doubleFactorial *= number;
        number -= 2;
    }
    printf("The double factorial of this number is %d.", doubleFactorial);
    return 0;
}
