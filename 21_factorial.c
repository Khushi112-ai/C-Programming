#include<stdio.h>
int main()
{
    int n,f=1,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("factorial=%d",f);
    return 0;
}