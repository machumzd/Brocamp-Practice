#include <stdio.h>
int main()
{
    int i,j,limit,a[100],flag=0;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the values to array");
    for(i=1;i<=limit;i++){
        scanf("%d",&a[i]);
    }
    printf("the repeated num is:");
    for(i=1;i<=limit;i++){
        for(j=i+1;j<=limit;j++){
            if(a[i]==a[j]){
                flag=1;
                printf(" %d,  ",a[i]);
                break;
            }

        }
    }
    if(flag==1){
       printf( "\nthe number is repeates");
    }else{
        printf("\nthe number is not  repeates");
    }
    return 0;
}
