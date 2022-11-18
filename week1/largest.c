#include<stdio.h>
int main()
{
    int num1,num2,num3 ;
    printf("enter 3 number");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2)
    {
        if (num1>num3)
    {
        printf("largest=%d",num1);
    }
    else 
    {
        printf("largest=%d",num3);
    }
    }
    else if(num2>num3)
    {
        printf("largest=%d",num2);

    }else
    {
        printf("largest=%d",num3);
    }
}
  