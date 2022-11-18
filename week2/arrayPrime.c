#include <stdio.h>
int main()
{
    int i, j, limit, flag;
    printf("enter the limit");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        flag = 0;
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != 1)
        {
            printf("%d \t", i);
        }
    }
}
