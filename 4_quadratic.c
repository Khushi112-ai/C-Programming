#include <math.h>
int main()
{
    int  a,b,c;
    float r1,r2,D;
    label:
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    if (a==0)
    {
        goto label;

    }
    D = (b*b)-(4*a*c);
    printf("the value of d is %f\n",D);
    if (D>0)
    {
        printf("the root is equal\n");
        r1=(-b+sqrt(D))/(2.0*a);
        printf("the value of root is:%f\n",r1);
        r2=(-b-sqrt(D))/(2.0*a);
        printf("the value of root is:%f\n",r2);
    }
    if(D<0)
    {
        printf("the root is imaginary");
    }
    return 0;

}