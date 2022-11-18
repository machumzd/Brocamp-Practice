#include<stdio.h>
int main()
{
    //totally error aann
    int i,j,k,p,w,limit,plim,l=1,m,flage=0,a[50];
printf("enter the pattern size");
scanf("%d",&plim);
printf("enter the array size");
scanf("%d",&limit);
printf("enter the array values");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<limit;i++){
    if(a[i]%5==0){
    for(j=i;j<limit;i++)
    {
        a[j]=a[j+1];
       
    }
    i--;
     limit--;
}

}

    for(i=1;i<=plim;i++){
      
        for(int q=1; q<=2; q++){
             if(q==0){
            printf("_ _ ");
        }else{
            printf("_ ");
        }
            for(k=1; k<=limit+1-i; k++){
                printf("%d ",a[w]);
                w++;
            }
            printf("\n");
        }
        for(j=1;j<=i;j++){
            printf("\n%d ",a[w]);
            w++;
        }
        printf("\n");
        
    }   
}

