#include<stdio.h>
int main()
// to print if sum greater 100 print odd if less print even
{
    int i,j,limit,a[100],b[100],sum;
    printf("enter the arrray size");
    scanf("%d",&limit);
    printf("enter the values");
    for(i=1;i<=limit;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<=limit;i++)
{
 sum=sum+a[i];
}
for(i=1;i<=limit;i++){
if(sum<100)
 {
    if(a[i]%2==0)
   {
    printf("%d ",a[i]);
   }
 }
 else{
    if(a[i]%2==1){
    printf("%d  ",a[i]);
    }
 }
}
}