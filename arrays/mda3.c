#include<stdio.h>
int getArray(int a[10][10],int b[10][10]);
void addArray(int a[10][10],int b[10][10],int c[10][10],int);
void displayArray(int c[10][10],int);

int main(void){
    int i,j,limit,a[10][10],b[10][10],c[10][10];
    limit=getArray(a,b);
    addArray(a,b,c,limit);
    displayArray(c,limit);
    return 0;

}
int getArray(int a[10][10],int b[10][10]){
    int i,j,limit;
    printf("enter the size limit of the array");
    scanf("%d",&limit);
    printf("enter the array 1..\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("please enter the array 2..\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            scanf("%d",&b[i][j]);
        }
    }
    return limit;
}

void addArray(int a[10][10],int b[10][10],int c[10][10],int limit){
    int i,j;
    printf("adding array1 and array 2...\n  ");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            c[i][j]=a[i][j]+b[i][j]; 
        }
        
    }
   
}
void displayArray(int c[10][10],int limit){
    int i,j;
    printf("the sum is :  ");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
               printf("%d \t",c[i][j]); 
        }
    }
}