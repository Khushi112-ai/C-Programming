#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two integers");
    scanf("%d%d",&a,&b);
    printf("\n before swapping a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n after swapping a=%d and b=%d",a,b);
    return 0;
    
}