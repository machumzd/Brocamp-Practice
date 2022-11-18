#include<stdio.h>
int main(){
    int i,limit,value,pos,a[10];
    printf("enter the array limit");
    scanf("%d",&limit);
    printf("enter the array values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
}
printf("enter the position");
scanf("%d",&pos);
printf("enter the value");
scanf("%d",&value);

for(i=limit-1;i>=pos-1;i--){
    a[i+1]=a[i];
   
    a[pos]=value;
}
printf("the final array is");
for(i=0;i<=limit;i++){
    printf("%d \t",a[i]);
}

}