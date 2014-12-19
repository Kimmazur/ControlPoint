#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,F=1;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i=1;i<=n;++i)
    {
        F*=i;
    }
    printf("Factorial you number is %d" , F);
	//вы палічылі звычайны, а не двайны фактарыал

    return 0;
}
