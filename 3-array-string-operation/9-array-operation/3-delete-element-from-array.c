#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for (int i = m-1; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}