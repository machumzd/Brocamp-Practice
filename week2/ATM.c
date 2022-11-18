#include <stdio.h>
int main()
{
    int balance = 3000, depo, amount, option;
    printf("Hello sir welcome to mzd Bank\n please choose any options \n");
    printf("1.Withdraw money \n2.Deposit money \n3.check your balance\n4.Exit ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("enter amount to withdraw\n");
        scanf("%d", &amount);
        balance = balance - amount;
        printf("withdraw successfully completed \n your remaining balance is :%d\n", balance);
       break;
        

    case 2:

        printf("please enter the deposit amount\n");
        scanf("%d", &amount);
        balance = balance + amount;
        printf("Deposit Successfull \n you total balance is:%d\n", balance);
        break;
       

    case 3:
        printf("your total balance is :%d\n", balance);
        break;
    

    case 4:
        printf("thank you have a nice day\n");
        return 0;
        break;

    default:
        printf("please choose mentioned options above\n");
        break;
    }
}