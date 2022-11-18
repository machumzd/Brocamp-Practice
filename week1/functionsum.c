#include <stdio.h>
int getNumber(int,int);
void displayNumber(int);
int main(){
    int a,b,c;
c=getNumber(a,b);
    displayNumber(c);

}
int getNumber(int a,int b){
  
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    printf("adding the value");
    int c=a+b;
    return c;
}
void displayNumber(int c){
    printf("the sum is: %d",c);
}
