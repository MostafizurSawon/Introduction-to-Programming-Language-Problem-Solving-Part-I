#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
    int flag=0;
    long long int ans=0;
    
    for(int i=0;i<k;i++)
    {
      int max=0;
      int index;
      for(int j=0;j<n;j++)
      {
        if(ar[j]>max)
        {
          max=ar[j];
          index=j;
        }
      }
      ar[index]=0;
      ans+=max;
    }

    printf("%lld\n",ans);

    return 0;
}