#include<stdio.h>
int main()
{
    int i,limit,first=0,second=0,a[100];
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter the array values\n");
    for(i=1;i<=limit;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=1;i<=limit;i++){
    if(a[i]<first)
    {
        second=first;
        first=a[i];
    }
    else if(a[i]<second&&a[i]<first)
    {
       
        second=a[i];
    }

}
printf("the second la num is:%d \n",second);
}
