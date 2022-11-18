#include <stdio.h>
int main(void)
{
    int size,arr1[10],arr2[10],store[10],i;
    printf("enter the size of arrays\n");
    scanf("%d", &size);
    printf("enter the values of array1:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the values of array2:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("swaapping...\n");
    for (i = 0; i < size; i++)
    {
            store[i] = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = store[i];
    }
    printf("\nthe array 1:");
    for (i = 0; i < size; i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nthe array 2:");
    for (i = 0; i < size; i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}