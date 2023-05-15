#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    if(a+1==b || a==b && a!=0 && b!=0 || b+1==a) printf("YES");
    else printf("NO");
   
    return 0;
}