#include<stdio.h>

void rec(int a)
{
  if(a == 0) return;
  printf("%d\n",a);
  rec(a-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    rec(n);
   
    return 0;
}