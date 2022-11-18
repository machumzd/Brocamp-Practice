#include <stdio.h>
int main()
{
    int i,j,limit,a[100],flag;
    printf("enter the size of the array");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }



    for(i=0;i<limit;i++){
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0&&a[i]!=1&&a[i]!=0){
            printf("%d ",a[i]);
        }
    }
}