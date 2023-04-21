#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int freq[26]={0};
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-97]++;
        }
    }

    for(int i=0; i<26; i++)
    {
        printf("%c - %d\n", i+97,freq[i]);
    }
   
    return 0;
}