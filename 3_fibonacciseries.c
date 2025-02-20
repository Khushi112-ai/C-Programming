#include <stdio.h>
int main()
{
    int i,n;
    int first=0,second=1,next;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("Fibonacci series");
    for(i=0;i<n;i++)
    {
        if (i==0)
        {
            printf("%d\t",first);
        }
        else if (i==1)
        {
            printf("%d\t",second);
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
            printf("%d\t",next);
        }
    }
    printf("\n");
    return 0;
}