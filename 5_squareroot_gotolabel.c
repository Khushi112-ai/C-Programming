#include <math.h>
int main()
{
    int m,n;
    label:
    printf("enter the value of n");
    scanf("%d",&n);
    if (n<0)
    {
        goto label;
    }
    m=sqrt(n);
    printf("square root is %d",m);
    return 0;
}