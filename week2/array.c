#include <stdio.h>
void largest(int[], int);
void smallest(int[], int);
void sum(int[], int);
void numberof(int);
int main()
{
    int limit, i, j, a[10], value;
    printf("enter the array size");
    scanf("%d", &limit);
    printf("enter the array values");
    for (i = 1; i <= limit; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n1.find largest element\n2.find smallest element\n3.sum of element \n4.number of elements\n");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        largest(a, limit);
        break;

    case 2:
        smallest(a, limit);
        break;

    case 3:
        sum(a, limit);
        break;

    case 4:
        numberof(limit);
        break;

    default:
        printf("next");
        break;
    }
}
void largest(int a[10], int limit)
{
    for (int i = 1; i <=limit; i++)
    {
        if (a[limit] < a[i])
        {
            a[limit] = a[i];
        }
    }

    printf("Largest element = %d\n", a[limit]);
}

void smallest(int a[10], int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        if (a[limit] > a[i])
        {
            a[limit] = a[i];
        }
    }
    printf("the smallest element = %d\n", a[limit]);
}

void sum(int a[10], int limit)
{
    int total = 0;
    for (int i = 1; i <= limit; i++)
    {
        total = total + a[i];
    }
    printf("the sum of the elements= %d\n", total);
}
void numberof(int limit)
{

    printf("the number of elements in the array is : %d\n", limit);
}
