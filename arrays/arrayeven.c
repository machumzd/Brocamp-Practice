#include<stdio.h>
int main()
{
    int i,limit,a[100],count=0;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
printf("entered values are: ");
for(i=0;i<limit;i++)
{
    printf(" %d\t",a[i]);
}
printf("\ntotal even numbers are: ");
for(i=0;i<limit;i++)
{
    if(a[i]%2==0){
        count++;
    }
}
printf("%d\n",count);

}