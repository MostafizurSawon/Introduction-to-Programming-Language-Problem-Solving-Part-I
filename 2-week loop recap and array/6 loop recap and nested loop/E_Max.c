#include<stdio.h>

int main()
{
    int n,m=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if(x>m)
        {
            m=x;
        }
    }
    printf("%d\n",m);
   
    return 0;
}