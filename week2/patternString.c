#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    char str[100];
    printf("enter the string\n");
    scanf("%s",str);
    n=strlen(str);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            if (i == j || i + j == n+1)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}