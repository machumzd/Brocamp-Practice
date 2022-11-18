#include<stdio.h>
int main()
{
    int i,j,limit=9,k;
    for(i=1;i<=limit;i++)
    {
       k=limit/2+1;
        for(j=1;j<=limit;j++)
        {
            if(i==k || j-i==k-1 ||i+j==(k*3)-1 ){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}