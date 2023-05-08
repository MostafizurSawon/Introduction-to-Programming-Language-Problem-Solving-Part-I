#include<stdio.h>

int minus()
{
  int x,y;
  scanf("%d %d",&x, &y);
  int a=x-y;
  return a;
}

int main()
{
    int ans=minus();
    printf("%d\n",ans);
   
    return 0;
}