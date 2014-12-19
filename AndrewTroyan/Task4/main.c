#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.141596654

int main()
{
    double radius, volume, area;
    printf("Enter the radius: ");
    scanf("%lf", & radius);
    volume = 4 * M_PI * radius * radius * radius / 3;
    area = 4 * M_PI * radius * radius;
    printf("The volume of the sphere is %.2f.\nThe area of the sphere is %.2f.", volume, area);
    return 0;
}
