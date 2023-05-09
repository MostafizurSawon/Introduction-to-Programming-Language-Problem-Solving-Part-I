#include<stdio.h>

long long sum(long long ar[],int n,int i)
{
  
  if(i==n) 
  {
    return 0;
  }
  
  long long ans=sum(ar,n,i+1);
  return ans+ar[i];
  
}

int main()
{
    int n;
    scanf("%d", &n);
    long long ar[n];
    for(int i = 0; i < n; i++)
    {
      scanf("%lld", &ar[i]);
    }
    long long an=sum(ar,n,0);
    printf("%lld",an);
   
    return 0;
}