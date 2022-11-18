#include <stdio.h>
int main (){
    int i,row,space,j;
    printf("enter the array size");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(space=1;space<=i;space++){
            printf(" ");
        }
        for(j=1;j<row-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
       for(i=1;i<=row+1;i++){
        for(space=1;space<=i-1;space++){
            printf(" ");
        }
        for(j=1;j<=row-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
}
}