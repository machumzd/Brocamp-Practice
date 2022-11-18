#include<stdio.h>
int main(){
    int i,j,row;
    printf("enter the row size");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=row-1;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}