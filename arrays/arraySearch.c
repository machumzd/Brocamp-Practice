#include <stdio.h>
int main()
{
    int limit, a[100], search, i, f = 0;
    printf("enter the limit ");
    scanf("%d", &limit);
    printf("enter the values of array");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the search key");
    scanf("%d", &search);

    for (i = 0; i < limit; i++)
    {

        if (search == a[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("the key is founded on the position of %d", i + 1);
    }
    else
    {
        printf("not found try again");
    }
    return 0;
}