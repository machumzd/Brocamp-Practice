#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    float n2,sum;
    printf("enter two number\n");
    scanf("%d%f",&n1,&n2);
    sum=n1+n2;
    printf("the sum=%d+%f= %f \n",n1,n2,sum);
}