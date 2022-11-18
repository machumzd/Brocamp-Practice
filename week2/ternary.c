#include<stdio.h>
int main()
{
    int i,num1,num2,num3,smallest;
        printf("enter 3 numbers to find smallest\n");
    scanf("%d%d%d",&num1,&num2,&num3);

   smallest=(num2>num1)?num1:((num2>num3)?num3:num2);
   printf("\n%d is the smallest number",smallest);
}