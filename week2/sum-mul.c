#include<stdio.h>
int main(){
    int num,sum,mul;
    printf("enter the  number ");
    scanf("%d",&num);
    sum=num+num;
    mul=num*num;
    if(sum==mul){
        printf("the sum and products are same\n");
    }else{
        printf("not same\n");
    }
        
    }
