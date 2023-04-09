#include<stdio.h>

int main()
{
    long long a,b,c,d,x,y;
    scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
    x=a;
    y=c;
    for (int i = 0; i < b-1; i++)
    {
        /* code */
        x=x*x;
    }
    for (int i = 0; i < d-1; i++)
    {
        /* code */
        y=y*y;
    }
    if(b == d)
    {
        if(a>c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else if(x>y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    //printf("%lld %lld",x,y);
    
    
   
    return 0;
}