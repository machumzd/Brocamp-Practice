#include<stdio.h>
int main(){
    int i,j;
    char a[]={"marathi"};
    for(i=0;i<=10;i++)
    {
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}