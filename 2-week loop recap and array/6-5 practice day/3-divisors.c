#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("1\n");
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            printf("%d\n",i);
        }
    }
    printf("%d\n",a);
   
    return 0;
}