#include<stdio.h>
int main()
{
    int i,j,limit,n=1,m=2,k,a[10],z,b[10],t,count=0;
    printf("enter the array size");
   scanf("%d",&limit);
   printf("enter the array values");
   for(i=0;i<limit;i++){
   scanf("%d",&a[i]);
   }
   for(i=0,z=0;i<limit;i++){
    if(a[i]%2==0)
    {
     b[z]=a[i];
     count++;
     z++;
    }
   }
   for ( i = 0; i < count; i++)
   {
     printf("%d ",b[i]);
   }
   

printf("\n \n \n \nthe pattern is \n");
t=0;
    for(i=1;i<=4;i++)
    {
      
        for(j=2;j<=n;j++){
            printf("_");
        }  
        
        n++;
        printf("%d",b[t++]);
        printf("\n");
        for(k=1;k<=m;k++){
            printf("%d ",b[t++]);
        }
        
        m=m+2;
         printf("\n");
    }
   
}