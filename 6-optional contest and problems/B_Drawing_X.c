#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int v=n-1;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        
        if(i == n/2)
        {
          if(j == n/2)
          {
            printf("X");
            v--;
          }
          else
          {
            printf("*");
          }
        }
        else
        {
          if(i==j)
          {
            printf("\\");
          }
          else if(j==v)
          {
            printf("/");
            v--;
          }
          else
          {
            printf("*");
          }
          
        }
      }
      printf("\n");
    }
   
    return 0;
}