#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
      int x;
      scanf("%d", &x);
      int counter = 0;
      while(x)
      {
        if(x%10!=0)
        {
          counter++;
        }
        x=x/10;
      }

      printf("%d\n", counter);
      
    }
    return 0;
}