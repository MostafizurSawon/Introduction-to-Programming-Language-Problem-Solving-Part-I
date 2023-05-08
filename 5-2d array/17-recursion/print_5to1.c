#include<stdio.h>

void fun(int a)
{
  if(a==6) return;
  
  fun(a+1);
  printf("%d\n", a);
}

int main()
{
    fun(1);
   
    return 0;
}