#include<stdio.h>

int main()
{
    long long a,b,c,d,x,y;
    scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
    
    if(a != c && a*b > c*d && d<b*2)
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