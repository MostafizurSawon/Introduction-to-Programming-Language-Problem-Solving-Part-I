#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i =0;i<n;i++)
    {
      int x,y;
      scanf("%d %d", &x, &y);
      int ans=0;
      for(int j=x;j<=y;j++)
      {
        ans=ans+j;
      }
      printf("%d\n", ans);
    }
   
    return 0;
}