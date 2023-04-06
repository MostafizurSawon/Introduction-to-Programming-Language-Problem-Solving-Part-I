#include<stdio.h>

int main()
{
    int n;
    long long b;
    float c;
    char d;
    scanf("%d %lld %f %c", &n, &b, &c, &d);
    
    printf("%d\n", n);
    printf("%lld\n", b);
    printf("%.2f\n", c);
    printf("%c\n", d);
    

    return 0;
}