#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("the fact is %d=%d",n,fact);
}