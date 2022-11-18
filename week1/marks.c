#include<stdio.h>
int main(){
    float marks;
    printf("enter your marks\n");
    scanf("%f",&marks);
    if(marks>50)
    {
        printf("\n---PASSED--\nthe student marks is %f outof 100\n",marks);
    }else{
        printf("\n---FAILED--- \n the student marks is %f outof 100\n",marks);
    }


}