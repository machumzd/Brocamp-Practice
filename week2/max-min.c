#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char str[20],result;
    int max=-1;
    int freq[256]={0};
    printf("\n enter the string");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        freq[str[i]]++;
    }
    for(i=0;i<len;i++)
    {
        if(max<freq[str[i]])
        {
            max=freq[str[i]];
            result=str[i];
        }
    }
    printf("maximum occuring char in string= %c  \n",result);
}
