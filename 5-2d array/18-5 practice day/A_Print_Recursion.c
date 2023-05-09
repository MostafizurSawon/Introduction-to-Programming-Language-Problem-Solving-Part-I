#include<stdio.h>

int rec(int a)
{
  if(a==0) return 0;
  printf("I love Recursion\n");
  rec(a-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    rec(n);
   
    return 0;
}