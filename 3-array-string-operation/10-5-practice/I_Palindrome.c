#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str[1001];
    scanf("%s",str);
    int len = strlen(str);
    bool ans=true;
    for(int i = 0,j=len-1; i < len/2; i++,j--)
    {
        if(str[i] != str[j])
        {
            ans=false;
        }
        
        else{
            continue;
        }
    }
    if(ans==true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

   
    return 0;
}