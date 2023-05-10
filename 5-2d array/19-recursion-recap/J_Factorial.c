#include<stdio.h>

long long fac(int x)
{
  if(x==0) return 1;
  long long an=fac(x-1);
  return an*x;

}

int main()
{
    long long n;
    scanf("%lld", &n);
    long long ans=fac(n);
    printf("%lld\n",ans);
   
    return 0;
}