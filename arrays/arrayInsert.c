#include <stdio.h>
int main(){
    int a[100]={};
    int i,num,pos,size=5;


    for(i=1;i<=size;i++){
        scanf("%d",&a[i]);
    }

    
  printf("enter the number");
  scanf("%d",&num);
  printf("please enter the posi");
  scanf("%d",&pos);
  for(i=size;i>=pos;i--)
  {
    a[i+1]=a[i];
  }
  a[pos]=num;
  size++;
  if(pos>size+1 ||pos<=0)
  {
    printf("invalid");
  }else{
    for(i=1;i<=size;i++)
    {  printf("%d\t",a[i]);
    }
  }
}