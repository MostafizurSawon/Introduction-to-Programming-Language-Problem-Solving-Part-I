#include<stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    //printf("%d", c);
    if(c>=65 && c<=90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else if(c>=97 && c<=122)
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    else
    {
        printf("IS DIGIT\n");
    }
   
    return 0;
}