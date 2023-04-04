#include<stdio.h>

int main()
{
    int a,b,sum,sub,mul;
    scanf("%d",&a);
    scanf("%d",&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    float div = a*1.0/b;
    printf("%d %d %d %.2f", sum,sub,mul,div);
    return 0;
}