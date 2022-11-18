#include<stdio.h>
int main()
{
// 1   
// 2   3   
// 4   5   6   
// 7   8   9   10
    int i,j,row=6,num=1;
    printf(" the pattern is \n");
    for(i=1;i<row;i++){
        for(j=1;j<i;j++){
            printf("%d   ",num);
            ++num;
        }
        printf("\n");
    }
}