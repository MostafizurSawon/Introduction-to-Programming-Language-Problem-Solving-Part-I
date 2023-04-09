#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = n;
    for (int i = 0; i < 3; i++)
    {
        sum = sum/10;
    }
    if(sum%2==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
        //printf("%d",sum);
    }
    //printf("sum = %d",sum);
    return 0;
}
