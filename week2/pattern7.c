#include<stdio.h>
int main()
{
    int i,j,limit=4,space;
    for(i=1;i<=limit;i++)
    {
        for(space=limit-i;space>=1;space--)
        {
            printf(" ");
        }
        for(j=1;j<=limit;j++)
        {
            if(i==1 || i==limit || j==1 || j==limit){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}