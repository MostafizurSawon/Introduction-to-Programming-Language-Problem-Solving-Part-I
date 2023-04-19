#include<stdio.h>
#include<string.h>

int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("%d %d\n",len_a, len_b);
    for(int i=0; i<len_a; i++)
    {
        printf("%c",a[i]);
    }
    for(int i=0; i<len_b; i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    printf("%c",b[0]);
    for(int i=1; i<len_a; i++)
    {
        printf("%c",a[i]);
    }
    printf(" %c",a[0]);
    for(int i=1; i<len_b; i++)
    {
        printf("%c",b[i]);
    }
   
    return 0;
}