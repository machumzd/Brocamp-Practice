#include <stdio.h>
int main()
{
    int i, limit = 0, a[100], sum;
    printf("enter the limit");
    scanf("%d", &limit);
    printf("enter the values");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("entered values are:");
    for (i = 0; i < limit; i++)
    {
        sum = sum + a[i];
        printf("%d\t ", a[i]);
    }
    printf("\n the sum of thes digits are:%d ", sum);

    return 0;
}