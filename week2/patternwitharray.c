#include <stdio.h>
int main()
{
    int i, j, row = 4, col = 1, k;
    int first = 0, second = 0, a[10], size;

    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the array values");
    for (i = 1; i <= size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= size; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] < first && a[i] > second)
        {
            second = a[i];
        }
    }

    printf("the second largest num is: %d \n-and the pattern is..\n", second);
    for (i = second; i >= 1; i--)
    {
        for (j = 1; j <= i * 2; j++)
        {
            printf("*");
        }

        for (k = 1; k <= col; k++)
        {
            printf("\n*");
        }
        printf("\n");
        col++;
    }
}