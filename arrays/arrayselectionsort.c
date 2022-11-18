#include <stdio.h>
int main()
{
    int limit, value[100], i, j;
    printf("enter the limit");
    scanf("%d", &limit);
    printf("enter the values");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &value[i]);
    }
    printf("\n");
    for (i = 0; i < limit - 1; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (value[i] > value[j])
            {
                int temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }
    for (i = 0; i < limit; i++)
    { 
        printf("%d\t ", value[i]);
    }
}