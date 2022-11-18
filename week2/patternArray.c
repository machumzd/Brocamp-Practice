#include<stdio.h>
int main()
{
    int i,k=3,m,n=3,limit1=0,limit2=0,a[100],b[100],j,flag=0;
printf("enter the limit of the array");
scanf("%d",&limit1);
printf("enter the first array");
for(i=0;i<limit1;i++){
    scanf("%d",&a[i]);

}
//second array scanning
printf("enter the second array");
printf("enter the limit of the array");
scanf("%d",&limit2);
for(i=0;i<limit2;i++){
scanf("%d",&b[i]); 
//array limit ntakke  b nte i add akki
}

printf("\npattern\n");
for(i=0;i<limit2;i++)
{
    a[limit1+i]=b[i];
}
//array print akkan
for(i=0;i<limit1+limit2;i++){
    flag=0;
    for(j=i+1;j<limit1+limit2;j++){
        if(a[i]==a[j])
        {
            flag=1;
        }
    
    }

}
int z=0;
for(i=1;i<=2;i++){
    for(j=1;j<=k;j++){
         if(flag==0)
    {
        printf("%d ",a[z]++);
    }
    }
    k=k+3;

    for(m=1;m<=n;m++){
         if(flag==0)
    {
        printf("\n%d ",a[z]++);
    }
    }
    n=n+3;
    printf("\n");
}

}