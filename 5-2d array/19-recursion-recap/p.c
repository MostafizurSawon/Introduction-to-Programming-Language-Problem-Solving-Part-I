#include<stdio.h>

int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}

int main()
{
    int n=2;
    int m=count(n);
    printf("%d\n", n);
   
    return 0;
}