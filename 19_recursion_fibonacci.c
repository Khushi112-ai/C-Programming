#include<stdio.h>
int fibonacci(int n)
{
    if (n ==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    return fibonacci (n-1)+ fibonacci(n-2);
}
int main()
{
    int n;
    printf("Enter the value of a:");
    scanf("%d",&n);
    for ( int i =0;i<n;i++)
    {
        int g = fibonacci(i);
        printf("%d",g);
    }
    printf("\n");
    return 0;
}