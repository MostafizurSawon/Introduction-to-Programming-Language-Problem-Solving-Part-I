#include<stdio.h>
#include <limits.h>

int main()
{
    int n,min=INT_MAX,min_pos=0,max=0,max_pos=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
            max_pos=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            min_pos=i;
        }
    }
    arr[min_pos]=max;
    arr[max_pos]=min;
    // printf("%d %d\n", max_pos, min_pos);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   
    return 0;
}