#include<stdio.h>

void rec(int a)
{
  if(a == 0) return;
  if(a == 1)
  {
    printf("%d",a);
  }
  else
  {
    printf("%d ",a);
  }
  rec(a-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    rec(n);
   
    return 0;
}