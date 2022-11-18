#include <stdio.h>
int main(){
    int i,sum,n;
    printf("enther the num\n");
    scanf ("%d",&n);
    for(i=1;i<=n;i+=2)
   
    { 
        printf("%d \n",i);
        sum=sum+i;
      
    }
    
      printf("total sum is=%d \n",sum);
     
      return 0;
}