#include<stdio.h>
int main()
{
    int i,j,num,n;
    printf("enter a number");
    scanf("%d",&num);
for(i=1;i<=num;i++){
n=i;
    for(j=1;j<=num;j++){
        if(j==1 || i==1){
        printf("%d ",n);
        n++;
    }
    else if(i+j==num+1)
    {
        printf("%d",num);
    }
    else{
        printf("  ");
    }
    }
    printf("\n");
}
}
