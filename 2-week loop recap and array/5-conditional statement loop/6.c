#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    int small=a;
    int large=a;
    if(b<=a && b<=c)
    {
        small = b;
    }
    else if(c<=a && c<=b)
    {
        small = c;
    }
    else if(a<=b && a<=c)
    {
        small = a;
    }


    if(a>=b && a>=c)
    {
        large = a;
    }
    else if(c>=a && c>=b)
    {
        large = c;
    }
    else if(b>=a && b>=c)
    {
        large = b;
    }
    
    printf("%d %d", small, large);
    
   
    return 0;
}