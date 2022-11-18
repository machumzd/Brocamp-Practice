#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter the number\n");
    scanf("%d",&num);
    
    for(i=1;i*i<=num;i++){
        if(i*i==num){
            flag=1;
            printf("the square root of %d= %d\n",num,i);
            break;
        }
    }
       if(flag==0) printf("Entered number don't have any perfect square\n");
    }

