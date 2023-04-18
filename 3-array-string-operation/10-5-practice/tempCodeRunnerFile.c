#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    gets(str);
    printf("%s",str);
   
    return 0;
}