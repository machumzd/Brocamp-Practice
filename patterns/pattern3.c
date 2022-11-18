#include <stdio.h>
int main()
{
//       1
//      1 1
//     1 2 1
//    1 2 3 1
//   1 2 3 4 1
//  1 2 3 4 5 1
    int i,j,row=5,space;
    printf("the pattern is\n");
    for(i=0;i<=row;i++)
    {
        for(space=0;space<=row-i;space++)
        {
        printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            
            printf("%d ",j);
          
        }
        
          printf("1");
        printf("\n");
    }
}