#include<stdio.h>
#include<limits.h>

int main()
{
    int n,k;
    scanf("%d %d",&n, &k);
    long long int ar[n];
    for(int i=0; i<n; i++)
    {
      scanf("%lld",&ar[i]);
    }

    int ans=INT_MAX;
    int loop=(n/k)*k;
    for(int i=1;i<=loop;i++)
    {
      if(ar[i-1]<ans)
      {
        ans=ar[i-1];
      }
      if(i%k==0)
      {
        printf("%d ",ans);
        ans=INT_MAX;
      }
      
    }

    if(n%k!=0)
    {
      int l2=n%k;
      while(l2!=0)
      {
        if(ar[loop]<ans)
        {
          ans=ar[loop];
          
        }
        loop++;
        l2--;
      }
      printf("%d",ans);
    }
    
    
   
    return 0;
}

