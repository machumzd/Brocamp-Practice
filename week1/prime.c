#include<stdio.h>
int main(){
    int mod,num,i,flag=0;
    printf("enter a num");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==1 ||num==1 || num==0){
        printf("its not prime number");
        }else{
            printf("its prime number");
        }
    }

