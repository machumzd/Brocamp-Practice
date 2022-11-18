#include<stdio.h>
int main()
{
    int limit,i,j,n=0;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=limit;j++)
        {
            if(n==0)
            {
                printf("1");
                n=1;
            }else{
                printf("0");
                n=0;
            }
            }
        
        printf("\n");
    }
}