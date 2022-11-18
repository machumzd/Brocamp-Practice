#include<stdio.h>
#include<string.h>

int main (){
    int i,j,len;
    char a[20];
    printf("enter the string");
    len=strlen(a);
    scanf("%s",&a[i]);
    for(i=0;i<len;i++){
        for(j=0;j<i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}