#include<stdio.h>

int count_before_zero(int arr[], int sz)
{
  int an=0;
  for(int i=0; i<sz; i++)
  {
    if(arr[i]!=0)
    {
      an++;
    }
    else
    {
      break;
    }
  }
  return an;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    int ans = count_before_zero(arr,sizeof(arr));
    printf("%d\n", ans);
   
    return 0;
}