#include<stdio.h>

int swap(int a,int b)
{
  int t=a;
  a=b;
  b=t;
  return a,b;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
      scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++)
    {
      if(ar[i]==0)
      {
        int tr=i;
        for( int j=0;j<tr;j++)
        {
          int t=ar[j];
          ar[j]=ar[j+1];
          ar[j+1]=t;
        }
      }
    }

    for(int i=0;i<n;i++)
    {
      printf("%d ",ar[i]);
    }
   
    return 0;
}