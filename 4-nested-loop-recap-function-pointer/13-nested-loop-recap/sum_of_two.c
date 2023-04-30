#include<stdio.h>

int main()
{
    int n,x;
    scanf("%d", &n);
    int ar[n];
    int flag=0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &x);
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ar[i]+ar[j]==x)
            {
                flag = 1;
            }
        }
    }
    if(flag==0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
   
    return 0;
}