#include<stdio.h>
int main ()
{
    int i,limit,sum=0,values[50];
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the values of array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);

    }
    for(i=0;i<limit;i++){
        sum=sum+values[i];
    }
    printf("\nresult is =%d",sum); 

}