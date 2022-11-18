#include<stdio.h>
int main(){
    int i,j,limit=11;
    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=limit;j++)
        {
            if(i+j==limit || i==j)
            {
                printf("*");
            }
            else{
               printf(" "); 
            }
          
        }
    printf("\n");
    }  
}