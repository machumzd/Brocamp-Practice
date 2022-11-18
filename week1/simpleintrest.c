#include <stdio.h>
int main(void)
{
    int P;
    float R,n,SI;
    printf("enter Principle amount\n");
    scanf("%d",&P);
    printf("enter Intrest rate\n");
    scanf("%f",&R);
    printf("enter Number of years\n");
    scanf("%f",&n);
    printf("\nthe simple intrest = (%d*%f*%f)/100",P,R,n);
    SI=((P*R*n)/100);
    printf("\n SI=%f",SI);
}