#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i = 0; i < n; i++)
    {
      scanf("%d", &ar[i]);
    }
    int c=0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(ar[i]+1 == ar[j])
        {
          count++;
        }
      }
      if(count>0)
      {
        c++;
        count = 0;
      }
    }

    printf("%d", c);
   
    return 0;
}