#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    printf("Input two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        i = a;
        a = b;
        b = i;
    }
    for(i=a;i<b;i++){
        for(int j=i+1;j<=b;j++){
            printf("[%d,%d]",i,j);
        }
        printf("\n");
    }
    return 0;
}
