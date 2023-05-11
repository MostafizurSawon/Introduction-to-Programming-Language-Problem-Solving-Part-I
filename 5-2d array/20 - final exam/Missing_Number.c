#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
      int ar[4];
      for(int j = 0; j < 4; j++)
      {
        scanf("%d", &ar[j]);
      }
      int ans=ar[0]-(ar[1]+ar[2]+ar[3]);
      printf("%d\n", ans);
    }
    
   
    return 0;
}