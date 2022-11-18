#include<stdio.h>
int main()
{
    int limit=10,i,j;
    for(i=1;i<limit;i++)
    {
        for(j=1;j<=limit;j++)
        {
          if(i==limit/2 || j==limit/2){
             printf("1");
          }else{
            printf("0");
          }
        }
      printf("\n");  
    }
}