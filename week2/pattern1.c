#include <stdio.h>
int main()
{
    int i, j, limit = 5, num = 1;
    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == i || i == limit || j == 1)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}