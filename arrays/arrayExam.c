#include<stdio.h>
int main()
{
    int limit,i,j,flag=0,a[10];
printf("enter the array limit");
scanf("%d",&limit);
printf("enter the array");
for(i=1;i<=limit;i++)
{
    scanf("%d",&a[i]);
}

    for(i=1;i<=limit;i++){
    for(j=2;j<=a[i]/2;j++)
    {
        if(a[i]%i==0)
        a[i]=0;
        flag=1;
    }
}
if(flag!=1)
{
    for(i=1;i<=limit;i++){
printf("%d",a[i]);
}
}
}
