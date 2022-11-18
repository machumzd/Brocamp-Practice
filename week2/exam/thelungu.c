#include<stdio.h>
int main()
{
    int i,j;
    char a[]={"thelungu"};
    for(i=0;i<=8;i++){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}