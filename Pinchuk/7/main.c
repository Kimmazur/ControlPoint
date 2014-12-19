#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,x;
    do{
    printf("Input odd number > 0: ");
    scanf("%d", &y);
    }while(y<=0 || y%2==0);
    x=y/2;
    for(int i=0;i<y;i++){
        for(int j=0;j<y;j++){
            printf("%c",j==y/2+x||j==y/2-x?'Y':' ');
        }
        if(x>0) x--;
        printf("\n");
    }
    return 0;
}
