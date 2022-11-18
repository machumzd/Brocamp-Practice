#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,flag=0;
    char string[100];
    printf("enter a string\n");
     scanf("%s",string);
    n=strlen(string);
    for(i=0;i<n/2;i++)
    {
        if(string[i]==string[n-i-1]){
            flag=1;
        }
    }
    if(flag==1){
        printf("the string is palindrome\n");
    }
        else {
        printf("the string is not palindrome\n");
        }
    }

