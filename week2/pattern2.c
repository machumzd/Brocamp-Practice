#include<stdio.h>
int main()
{
    int i,j,limit=5,space;
    for(i=1;i<=limit;i++)
    {
        for(space=1;space<=limit-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==limit || j==1 ||j==i){
            printf("%d ",j);
            }else{
                printf("  ");
            }

        }
        printf("\n");
    }
}