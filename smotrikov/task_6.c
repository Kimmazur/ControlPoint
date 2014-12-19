#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i=0;
    printf("ENTER a =");
    scanf("%d",&a);
    printf("ENTER b =");
    scanf("%d",&b);
    for(a;a<b;++a){
         i = ++a;
        for(i;i<=b;++i){
            printf("%d-%d\n",a,i);
        }

    }
    return 0;
}
