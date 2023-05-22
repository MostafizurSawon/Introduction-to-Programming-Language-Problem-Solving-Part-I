#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
      int k;
      scanf("%d", &k);

      int ar[k];
      for(int j = 0; j < k; j++)
      {
        scanf("%d", &ar[j]);
      }
      int m=ar[0],m2=ar[0];
      int c=0;
      for(int j = 1; j < k; j++)
      {
        if(ar[j]>m)
        {
          m=ar[j];
          
        }
      }
      for(int j = 1; j < k; j++)
      {
        if(ar[j]>m2 && ar[j]<m)
        {
          m2=ar[j];
        }
        if(ar[j]==m)
        {
          c++;
        }
      }
      if(c>1)
      {
        m2=m;
      }
      for(int j = 0; j < k;j++)
      {
        if(ar[j] == m)
        {
          printf("%d ", m-m2);
        }
        else
        {
          printf("%d ", ar[j]-m);
        }
      }
      printf("\n");
    }
   
    return 0;
}




