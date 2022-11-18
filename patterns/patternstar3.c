#include<stdio.h>
int main(){
    int i,j,m=3,n=1,k,limit=10;
    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("*");
        }
        m=m+2;
        
        for(k=0;k<=n;k++)
        {
            printf("\n*");
        }
        n=n+1;
    }
}