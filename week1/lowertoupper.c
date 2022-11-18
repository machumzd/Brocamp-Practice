#include <stdio.h>

int main()
{
    char a[100],i,value;
    printf("enter the word to convert upperCase .. ");
    scanf("%s",&a[i]);
for(i=0;a[i]!='\0';i++)
{
if(a[i]<=122 &&a[i]>=97){
a[i]=a[i]-32;
}
}printf("%s ",a);
    return 0;
}