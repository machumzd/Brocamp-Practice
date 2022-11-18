#include<stdio.h>
int main()
{
    int tax;
    float amount;
    printf("welcome to income tax department\n please enter your annual income\n");
    scanf("%d",&tax);
    if(tax<250000)
    {
        printf("\n NO TAXES");
    }
          else if(tax<500000)
        {
            amount=tax*0.05;
            printf("tax percentage:5\n THE INCOME TAX AMOUNT:%f\n",amount);
        }
          else if(tax<100000)
        {
            amount=tax*0.2;
            printf("tax percentage:20\n THE INCOME TAX AMOUNT:%f\n",amount);
        }
          else if(tax<500000)
        {
             amount=tax*0.3;
            printf("tax percentage:30\n THE INCOME TAX AMOUNT:%f\n",amount);
        }else{
            printf("\nplease check again");
        }
}
