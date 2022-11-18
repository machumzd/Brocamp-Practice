#include<stdio.h>
int main(){
    int i,j;
    char a[]={"kannada"};
    for(i=1;i<=7;i++)
    {
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}