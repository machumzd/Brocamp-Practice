#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2;
    printf("enter 2 numbers \n");
    scanf("%d%d",&n1,&n2);
    printf("entered numbers are :%d,%d \n",n1,n2);
    if(n1<n2)
    {
        printf("and the shortest number is :%d \n",n1);
    }
    else{
        printf("and the shortest num is : %d \n",n2);
    }
}