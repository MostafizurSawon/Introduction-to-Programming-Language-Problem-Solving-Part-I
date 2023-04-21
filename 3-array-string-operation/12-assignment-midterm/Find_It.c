#include<stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ans++;
        }
    }

    printf("%d",ans);
   
    return 0;
}