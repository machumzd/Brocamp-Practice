#include <stdio.h>
int main()
{

//             A 
//           A B A 
//         A B C B A 
//       A B C D C B A 
//     A B C D E D C B A 
//   A B C D E F E D C B A 
    int i,j,k,m,limit;
    char c='A';
    printf("enter  a row size");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=limit;j>=i;j--)
        printf("  ");
        for(k=1;k<=i;k++)
        printf("%c ",c++);
        c--;
        for(m=1;m<i;m++)
        printf("%c ",--c);
        printf("\n");
        c=65;
    }
    return 0;
}
