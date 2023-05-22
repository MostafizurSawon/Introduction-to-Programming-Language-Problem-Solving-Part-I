#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
      int x;
      scanf("%d", &x);
      int ar[x];
      for(int j = 0; j < x; j++)
      {
        scanf("%d", &ar[j]);
      }
      int y;
      scanf("%d", &y);
      int ans=-1;
      for(int j = 0; j < x; j++)
      {
        if(ar[j] == y)
        {
          ans=j+1;
          break;
        }
      }
      if(ans==-1)
      {
        printf("Case %d: Not Found\n", i+1);
      }
      else
      {
        printf("Case %d: %d\n",i+1, ans);
      }
      
    }
   
    return 0;
}