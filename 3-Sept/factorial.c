#include<stdio.h>
void main()
{
    int n,fact=1,i;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
}