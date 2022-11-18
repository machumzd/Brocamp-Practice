#include <stdio.h>
int main()
{
    int i,n,j;
    n=1;
  for(i=1;i<=8;i++){
    for(j=1;j<=7;j++)
    {
        if(i<=5&&j>=1&&j<=n){
                printf("*");
        }else if(i>=5&j>=1&&j<=n)
        {
            printf("*");
        }
    }
  
    printf("\n");
    (i<=5)?(n=n+2):(n=n-2);
  }
}