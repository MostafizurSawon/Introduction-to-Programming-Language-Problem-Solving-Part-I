#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long int ar[n];
    for(int i=0; i<n; i++)
    {
      scanf("%lld",&ar[i]);
    }
    int count = 0;
    for(int i=0; i<n; i++)
    {
      if(ar[i]%2==0)
      {
        long long int ans=ar[i];
        int t=0;
        while(ans%2==0)
        {
          t++;
          ans=ans/2;
        }
        if(t>count)
        {
          count=t;
        }
      }
    }
    printf("%d\n",count);
   
    return 0;
}