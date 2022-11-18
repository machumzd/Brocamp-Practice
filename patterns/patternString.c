#include<stdio.h>
int main()
{
    int i,j,size;
    char a[10]={'m','a','l','a','y','a','l','a','m'};
    printf("enter the size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",a[i]);
           ++a[i];
            
        }
        printf("\n");
    }
}