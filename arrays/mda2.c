#include <stdio.h>
int main()
{

    int size, a[100][100], i, j, b[100][100], c[100][100];
    printf("enter the size of arrays");
    scanf("%d", &size);
    printf("enter the values of array 1\n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the values of second array");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the sum of the arrays \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
