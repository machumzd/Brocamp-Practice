#include <stdio.h>
int main()
{
    int i, j, n,limit,k;
    printf("enter the limit");
    scanf("%d",&limit);
    n = 3;
    k=(limit/2)+1;
    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= k; j++)
        {

            if (i <= k && j >= 1 && j <= 1 * i)
            {
                printf("%d ", n);
            }
            else if (i >= k && j >= 1 && j <= (limit+1) - i)
            {

                printf("%d ", n);
            }
        }
        printf("\n");
        (i >=k) ? n-- : n++;
    }
}