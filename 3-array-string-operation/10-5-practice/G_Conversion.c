#include<stdio.h>
#include<string.h>

int main()
{
    char str[100001];
    scanf("%s", str);
    
    int len=strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i]==',')
        {
            str[i]=' ';
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s", str);

    return 0;
}