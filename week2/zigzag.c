#include<stdio.h>
int main(){
    int i,j,n,limit;
    char str[100];
    printf("enter the row size");
    scanf("%d",&limit);
    printf("entr the string to print");
    scanf("%s",str);
    n=limit+1;
    int a=0;
    for(i=1;i<=limit;i++){
        for(j=limit;j<=30;j++){
            if((i+j)%n==0 || j==1 || j%n==0 ){
                printf("%c",str[i]);

            }else{
                printf(" ");
            }

        }
        printf("\n");
    }
}