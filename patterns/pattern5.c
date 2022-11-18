#include<stdio.h>
int main(){
    int i=1,k,j,m,index=0,a[100];
    printf("the array of odd\n");
    int num=99;
for(i=1;i<num;i++){
    if(i%2!=0){
        a[k]=i;
       i=i+2;
    }
    else if(i%2==0){
        a[k]=i;
    }
   
    k++;
}

    for(j=1;j<=12;j++){
        for(m=1;m<=12;m++){
            if(m==1||(j==5&&m<=4)||(j==1&&m<=2)||(j==12&&m<=6))
                {
                
                printf("%d ",a[index]);
                index++;
            }

        }
        printf("\n");
    }
}


