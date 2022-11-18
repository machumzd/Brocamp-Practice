#include <stdio.h>
int main (void)
{
 //1
// 12
// 123
// 1234
// 12345
// 123456
// ******
// *****
// ****
// ***
// **
// *
    int i,j,row;
    printf("enter the row size\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}