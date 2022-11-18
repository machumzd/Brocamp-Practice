#include<stdio.h>
int main()
{
    int i,n,k,j;
    char hello[]={'M','A','L','A','Y','A','L','A','M'};
    for(i=0;i<=8;i++){
      
        for(j=0;j<=i;j++)
        {
            printf("%c",hello[j]);
        }
        printf("\n");
    }
}