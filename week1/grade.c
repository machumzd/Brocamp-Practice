#include <stdio.h>
int main(){
    float mark;
    printf("enter your marks\n");
    scanf("%f",&mark);
    if(90<=mark)
    {
        printf("A\n");
    }else if(80<=mark)
    {
        printf("B\n");
    }else if(70<=mark)
    {
        printf("C\n");
    }else if(60<=mark)
    {
        printf("D\n");
    }else if(50<=mark)
    {
        printf("E\n");
    }else if(0<=mark)
    {
        printf("Failed\n");
}else{
    printf("please check again");
}
}
