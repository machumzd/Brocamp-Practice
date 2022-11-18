#include<stdio.h>
int main()
{
    int i,j,limit=7;
    for(i=1;i<=limit;i++)
    {
       
        for(j=1;j<=limit;j++)
        {
            if(i==1 || i==limit || i==j ||j==1|| j==limit || i+j==limit+1){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}