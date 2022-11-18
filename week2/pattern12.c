#include<stdio.h>
int main(){
    int i,j,limit,k;
    printf("enter the limit");
    scanf("%d",&limit);
    k=(limit/2);
    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=limit;j++){
            if(i<=k-1&&j>=i+1&&j<=limit-i)
            {
                printf(" ");
            }
            else if(i>=k+2&&i+j>=limit+2&&j<=i-1)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}