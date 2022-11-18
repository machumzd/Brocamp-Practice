#include<stdio.h>
int main()
{
    int limit=5,n,space,i,j;
    for(i=1;i<=limit;i++)
    {
        n=i;
        for(space=1;space<=limit-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            if(j==limit)
            {
                printf("%d",i);
            }
            else{
            printf("%d ",n);
            n++;
            }
        }
        printf("\n");
    }
}