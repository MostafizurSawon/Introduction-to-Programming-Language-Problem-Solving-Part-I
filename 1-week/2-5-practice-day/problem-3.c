#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
        if(a%2==0)
        {
            printf("This is an even number!");
        }
        else
        {
            {
            printf("This is an odd number!");
        }
        }
    }
    else
    {
        printf("Please enter a non-negative number!\nThank you.");
    }
    
    return 0;
}