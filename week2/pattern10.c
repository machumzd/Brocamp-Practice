#include <stdio.h>
int main()
{
    int i, j, limit, k;
    printf("enter the limit");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        k = (limit / 2) + 1;
        for (j = 1; j <= limit; j++)
        {
            if (i <= k && j >= k + 1 - i && j <= k - 1 + i)
            {

                printf("*");
            }
            else if (i >= k && j >= i - (k - 1) && i + j <= k + limit)
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}