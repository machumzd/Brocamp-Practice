#include<stdio.h>
int main(){
    int i,j,k,l=1,m=1,n=2;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=m;j++){
            printf("\nX");
        }
        m++;
        printf("\n");
        for(j=1;j<=l;j++){
            printf("_");
        }
        l++;
        for(k=1;k<=n;k++){
            printf("X");
        }
        n=n*2;
        printf("\n");
    }
}