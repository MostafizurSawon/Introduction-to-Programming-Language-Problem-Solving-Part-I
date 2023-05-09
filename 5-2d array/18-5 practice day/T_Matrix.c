#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long ar[n][n];

    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        scanf("%lld",&ar[i][j]);
      }
    }

    int a=0;
    int b=0;
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        if(i==j)
        {
          a=a+ar[i][j];
        }
        if(i+j==n-1)
        {
          b=b+ar[i][j];
        }
      }
      
    }
  int ans=a-b;
  if(ans<0)
  {
    ans=ans*-1;
  }
  printf("%d\n", ans);

    return 0;
}