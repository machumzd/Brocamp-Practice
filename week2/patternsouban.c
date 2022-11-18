#include<stdio.h>
int main()
{
    int i,j,flag=0,m=2,k;
    for(i=1;i<=4;i++){

       for(j=1;j<=i;j++){
            if(flag==0){
                printf("*");
                flag=1;
            }
            else if(flag==1)
            {
                printf("*\n*\n*");
                flag=0;
            }
       
       printf("\n");
        for(k=1;k<=m;k++){
            printf("*");

        }
        m=m+2;
        printf("\n");
        }
    }
}