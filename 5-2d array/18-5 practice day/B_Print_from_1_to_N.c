#include<stdio.h>

void rec(int a)
{
  if(a == 0) return;
  rec(a-1);
  printf("%d\n",a);
  
}

int main()
{
    int n;
    scanf("%d", &n);
    rec(n);
   
    return 0;
}