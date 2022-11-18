#include<stdio.h>
#include <string.h>

int main(){
    int i,j,len,m,k;
    char str[20];
    printf("enter the string");
    scanf("%s",str);
    len=strlen(str);
    for(i=1;i<=len;i++){
        for(j=0;j<=len-i;j++){
            m=j+i-1;
            for(k=j;k<=m;k++){
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }

}