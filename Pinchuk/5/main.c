#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f=1;
    do{
        printf("Input number > 0: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=n; i>0; i-=2){
        f*=i;
    }
    printf("%d!! = %d\n",n,f);
    return 0;
}
