#include<stdio.h>
int main()
{
    int i,j,limit,k;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        k=(limit/2)+1;
        for(j=1;j<=limit;j++)
        {
             if(i+j==k+1 || j==(k-1)+i ||j==k ||i==k)
            {
                printf("*");
            }
            else  if(j==i-(k-1) ||j==k ||i+j==k+limit )
            { 
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}