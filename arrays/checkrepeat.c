#include <stdio.h>  
  
int duplicate_element ( int arr[], int num)  
{  
    // check num is equal to 0 and num == 1  
    if (num == 0 || num == 1)  
        return num;  
          
    // create temp array to store same number     
    int temp [num];   
      
    // declare variable  
    int i, j = 0;  
      
    // use for loop to check duplicate element  
    for (i = 0; i < num - 1; i++)  
    {  
        // check the element of i is not equal to (i + 1) next element  
        if (arr [i] != arr[i + 1])  
            temp[j++] = arr[i];  
    }  
    temp[j++] = arr[ num - 1];  
  
  
    // check the original array's elements with temporary array's elements  
    for (i = 0; i < j; i++)  
    {  
        arr[i] = temp[i];  
        }     
          
    return j;     
}  
  
int main ()  
{  
    int num;  
    printf (" Define the no. of elements of the array: ");  
    scanf (" %d", &num);  
      
      
    int arr[num], i;  
      
    printf (" Enter the elements: ");  
    // use loop to read elements one by one  
    for ( i = 0; i < num; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
      
    printf (" \n Elements before removing duplicates: ");  
    for ( i = 0; i < num; i++)  
    {  
        printf (" %d", arr[i]);  
    }  
      
    num = duplicate_element (arr, num);  
      
    // print array after removing duplicates elements  
    printf (" \n Display array's elements after removing duplicates: ");  
    for ( i = 0; i < num; i++)  
    {  
        printf (" %d", arr[i]);  
        }     
          
    return 0;     
      
}  