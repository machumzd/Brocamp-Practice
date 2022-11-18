#include<stdio.h>


int displayArray(int a[],int size){
    int max=a[0],i;
for(i=0;i<size;i++)
    if(a[i]>max)
    
        max=a[i];
    
      return max;  

}

int main()
{
    int limit,i,a[100];
   printf("enter the limit");
   scanf("%d",&limit);
   printf("enter the array values");
   for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
   }
   printf("the high value is %d",displayArray(a,limit));
   return 0;
}
