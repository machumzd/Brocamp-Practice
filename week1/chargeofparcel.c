#include<stdio.h>
int main()
{
    int weight,charge,f=0;
    printf("welcome to charge portel\n please enter your parcel weight in gm's\n");
    scanf("%d",&weight);
    printf("entered weight is : %d gm \n",weight);
    if(weight==500||weight<500)
    {
       f=1;
    }
    if(f==1)
    {
         printf("your charge is Rs:200\n");
    }else{
         charge=(weight/500*170);
    printf("please pay the additional charge Rs:%d \n",charge);
    }
   return 0;
}