#include<stdio.h>
int main(){
// *        *
// **      **
// ***    ***
// ****  ****
    int i,j,k,m,limit;
    printf("enter the size of the array");
    scanf("%d",&limit);
    for(i=1;i<limit;i++){

        for(k=0;k<i;k++)
            printf("*");
            for(j=limit;j>i;j--)
        printf("  ");

            for(m=1;m<=i;m++)
            printf("*");
        
        printf("\n");
    }
    return 0;
}