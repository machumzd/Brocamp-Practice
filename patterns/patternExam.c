#include <stdio.h>
int main()
{
    int i,h,j,n=2,limit,m=3,k,p;
  printf("enter the size of pattern");
  scanf("%d",&limit);
    for(i=1;i<=limit;i++)  
    {
    h=((i*2));
    p=((i*2));
    for(j=1;j<=i*i*2;j++){
       if(i>=2&&j==h+1){
            printf("\n*");
            h=h+p;
       }else
             printf("*");
    }
  
        for(k=1;k<=m;k++)
        {
            printf("\n*");
        }
        printf("\n"); 
    }
}