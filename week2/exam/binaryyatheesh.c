#include<stdio.h>
int main(){
    int i,j,flag=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(flag==0){
                printf("1");
                flag=1;

            }else if(flag==1)
            {
            printf("0");
            flag=0;
            }
        }
        printf("\n");
    }
}