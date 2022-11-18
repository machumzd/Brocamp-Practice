#include<stdio.h>
int main()
{
    int i,first=0,second=0,limit=5,a[10];
    printf("enter the array");
    for(i=1;i<=limit;i++){
        scanf("%d",&a[i]);
    }
    
    
    for(i=1;i<=limit;i++){
        if(a[i]<second){
            second=first;
            first=a[i];
        }
        else if(a[i]<first&&a[i]>second){
            second=a[i];
            break;
        }
        
    }
    printf("smallest =%d",second);
}