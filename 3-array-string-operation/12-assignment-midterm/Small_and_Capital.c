#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    int cap=0,small=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            small++;
        }
        else
        {
            cap++;
        }
    }
    printf("%d %d", cap,small);

    return 0;
}