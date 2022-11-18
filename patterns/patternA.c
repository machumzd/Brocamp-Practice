#include <stdio.h>
int main(){
    int row,i,j;
   
    printf("enter the limit");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
           
        }
        printf("\n");
    }
}
