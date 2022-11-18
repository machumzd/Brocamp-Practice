#include<stdio.h>
int main()
{
    int i,j,limit,values[100];
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the values");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);

    }
    printf("sorting to desc..");
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++){
            if(values[i]<values[j])
            {
            int temp=values[i];
            values[i]=values[j];
            values[j]=temp;
        }
        }
    }
    for(i=0;i<limit;i++){
    printf("%d\t",values[i]);
    }
}