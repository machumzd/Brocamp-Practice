#include <stdio.h>
int main(){
    int i,limit,space,j;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=limit;i>=1;i--)
    {
        for(space=1;space<=(limit-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=(i*2)-1;j++)
        {
            printf("*");
        }
         printf("\n");
        
        
    }
}