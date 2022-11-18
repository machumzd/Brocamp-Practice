#include <stdio.h>
#include <stdlib.h>
int getArray(int a[]);
void displayArray(int,int[]);
int main(void)
{
    int c,a[100];
    c=getArray(a);
    displayArray(c,a);
    return 0;
}
int getArray(int a[])
{   int i,size;
    printf("enter the limit of array");
    scanf("%d",&size);
   
    printf("enter the values of array");
    for (i = 0; i <size; i++)
    {
        scanf("%d", &a[i]);
    }
    return size;
}

void displayArray(int limit,int a[])
{
    int i;
    printf("\nenteres arrays of :");
    for (int i = 0; i <limit; i++)
        printf("%d\t", a[i]);
}