#include<stdio.h>
int main()
{
    int limit,a[10],i,j,count;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the array values");
    for(i=1;i<=limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=limit;i++){
        count=0;
        for(j=i+1;j<=limit;j++){
            if(a[i]==a[j])
            {
                count++;
              
            }
        }
    }
    
}