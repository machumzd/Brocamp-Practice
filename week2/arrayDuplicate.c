#include <stdio.h>
int main()
{
    int i, j, limit, a[10], count = 0;
    printf("enter the size of array");
    scanf("%d", &limit);
    printf("enter the array values");
    for (i = 1; i <= limit; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= limit; i++)
    {
        count = 0;
        for (j = i + 1; j <= limit; j++)
        {
            if (a[i] == a[j])
            {
                count=1;
            }
        }
        if (count == 0)
        {
            printf("%d \t", a[i]);
        }
    }
}