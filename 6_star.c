#include <stdio.h>
int main()
{
    int i=1,n,j;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}