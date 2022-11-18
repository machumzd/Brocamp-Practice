#include<stdio.h>
int main(){
    int i,a[10],pos,value,limit;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the array values");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the array position");
    scanf("%d",&pos);
    

    for(i=pos-1;i<=limit-1;i++){
       
       a[i]=a[i+1];
    }
    for(i=0;i<limit-1;i++){
        printf("%d \t",a[i]);
    }
}