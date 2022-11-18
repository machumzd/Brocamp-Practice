#include<stdio.h>
int main()
{
    int i=1,j,k=1;
int h=7;
int m=1;
    for(i=1;i<=8;i++){

       
        for(j=1;j<=k;j++)
        {
            if(j%2==0){
                printf("* ");
             } else{
            printf("%d ",m);
             }
        }
        if(i>4){
            if(i==5){
           
            }
            m--;
        }
        else{

            m++;
        }
    
        
       (i<8/2)?(k=k+2):((i>8/2)?(k=k-2):(k));
        printf("\n");
    }
}