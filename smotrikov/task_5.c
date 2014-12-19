#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    unsigned int fact=1;
    printf("Enter n =");
    scanf("%d",&n);
    if (n == 0){
        printf("Enter n >0");
    }else {

    if(n%2==0)
    {
       for(int i=2; i<=n; i+=2)
       {
           fact*=i;
       }
    }
    else
    {
        for(int i=1; i<=n; i+=2)
       {
           fact*=i;
       }
    }
    }
printf("%d",fact);
    return 0;
}
