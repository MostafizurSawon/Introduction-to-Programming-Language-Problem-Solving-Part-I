#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s", &str);
    int ans=0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            ans++;
        }
    }
    printf("%d\n", ans);
   
    return 0;
}