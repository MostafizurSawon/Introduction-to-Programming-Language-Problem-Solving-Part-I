#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    if(b%a == 0)
    {
        printf("Multiples\n");
    }
    else if(a%b == 0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }
   
    return 0;
}