#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,result,choice;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("\n entered numbers are %d,%d \n---------------",n1,n2);
    printf("\n 1.addition \n 2.multiplication \n 3.substraction \n 4.division \n-----------------\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        result=n1+n2;
    }
    else if(choice==2)
    {
        result=n1*n2;
    }else if(choice==3)
    {
        result=n1-n2;
    }else if (choice==4)
    {
        result=n1/n2;
    }
    else{
        printf("\ntry again");
    }
    printf("\nthe result=%d \n",result);
}