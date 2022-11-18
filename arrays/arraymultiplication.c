#include<stdio.h>
int main(){
    int a[100],i,limit,num;
    printf("enter the array limit\n");
    scanf("%d",&limit);
    printf("enter the values of array\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("\nthe mul of adj values is : ");
    for(i=1;i<limit;i++)
    {
        num=a[i]*i;
        printf("%d\t",num);

    }
}