#include<stdio.h>

int add(int x,int y)
{
  int a=x+y;
  return a;
}

int main()
{
    int a=10,b=5;
    int ans=add(a,b);
    printf("%d\n",ans);
   
    return 0;
}