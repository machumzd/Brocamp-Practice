#include<stdio.h>
int main()
{
    int i,j,limit=5,a[10],count;
    printf("enter the array values");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
for(i=0;i<limit;i++){
    count=0;
    for(j=i+1;j<limit-1;j++){
        if(a[i]==a[j]){
            a[i+1]=a[i];
            limit--;
            i--;
        }


    }

}

for(i=0;i<limit;i++){
    printf("%d",a[i]);

}


}