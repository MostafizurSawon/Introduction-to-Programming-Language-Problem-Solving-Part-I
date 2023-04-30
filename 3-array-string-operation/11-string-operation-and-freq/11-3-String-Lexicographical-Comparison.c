#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int ans = strcmp(a,b);
    if (ans == 0)
    {
        printf("Equal");
    }
    else if (ans < 0)
    {
        printf("A less");
    }
    else
    {
        printf("B less");
    }
   
    return 0;
}