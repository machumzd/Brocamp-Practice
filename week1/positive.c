#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("hello bro enter a number \n");
    scanf("%d",&n);
    printf("the entered number is : %d \n",n);
    if(n>0)
    {
        printf("the number is POSITIVE\n");
    }else{
        printf("the number is NEGATIVE\n");
    }
}