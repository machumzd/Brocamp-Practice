#include<stdio.h>
int main()
{
    int i,a[10],limit=4,sum=0;
    printf("enter the array values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<limit;i++){
    sum=sum+a[i];
}
printf("sum =%d ",sum);
for(i=0;i<limit;i++){
    if(sum>=100&&a[i]%2==0){
        a[i]=a[i+1];
        i--;
        limit--;
    }
   
    
    }
    else if(sum<100&&a[i]%2!=0){
            a[i]=a[i+1];
            i--;
            limit--;       
        }
        
     
        
    }
    
}
for(i=0;i<limit;i++){
    printf("%d ",a[i]);
}
}