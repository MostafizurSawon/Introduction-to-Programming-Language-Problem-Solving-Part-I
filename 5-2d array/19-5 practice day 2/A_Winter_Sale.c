#include<stdio.h>

int main()
{
    float d,p;
    scanf("%f %f",&d, &p);
    float ans=p+(d*p)/(100-d);
    printf("%.2f", ans);
   
    return 0;
}