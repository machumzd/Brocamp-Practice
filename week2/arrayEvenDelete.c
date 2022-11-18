#include<stdio.h>
int main(){
    int i,limit,a[10],b[10],j;
    printf("enter the array limit");
    scanf("%d",&limit);
    printf("enter the array values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        
        if(a[i]%2==0){
            for(j=0;j<limit;j++){
            a[i]=a[i+1];
            limit--;
            }  
        
        }
      
    } 
   
    for(i=0;i<limit;i++){
    printf("%d \t",a[i]);
    }
}