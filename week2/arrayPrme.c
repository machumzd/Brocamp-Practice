
#include<stdio.h>
int prime(int a);
int main()
{
    int limit=6,i,j,flag,a[20];
    printf("enter the array");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        flag=prime(a[i]);
        if(flag==1){
            for(j=i;j<limit;j++){
                a[j]=a[j+1];
            }
            limit--;
        }
    }

    printf("\n");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
}
int prime(int a){
    int flag=1,i;
    if(a==1){
        return flag=0;
    }else if(a==2){
        return flag=1;
    }else{
        for(i=2;i<a;i++){
            if(a%i==0){
                flag==0;
                break;
            }
            
        }
    }
    return flag;
}