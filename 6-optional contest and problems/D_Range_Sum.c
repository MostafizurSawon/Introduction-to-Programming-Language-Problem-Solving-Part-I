#include<stdio.h>
#include<limits.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    while(n--)
    {
      long long int x,y;
      scanf("%lld %lld", &x, &y);
      long long ma,mi;
      if(x>y)
      {
        ma=x;
        mi=y;
      }
      else
      {
        mi=x;
        ma=y;
      }
      mi--;
      long long int a1=(ma*(ma+1))/2;
      long long int a2=(mi*(mi+1))/2;
      printf("%lld\n", a1-a2);
    }
   
    return 0;
}