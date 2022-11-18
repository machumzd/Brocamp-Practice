#include<stdio.h>
int main(){
    int j,arr[20],f[20],limit,count,i;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the array values");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
        f[i]=-1;
    }
    for(i=0;i<limit;i++){
        count=1;
        for(j=i+1;j<limit;j++){
            if(arr[i]==arr[j]){
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0){
            f[i]=count;
        }
        }
        printf("the freaquency of tha array elemenets is :");
        for(int i=0;i<limit;i++){
            if(f[i]!=0){
                printf("\n%d = %d",arr[i],f[i]);
            }
        }
    }
