#include<stdio.h>

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
        for( int j=0,k=i-1;j<i/2;j++,k--)
        {
          int temp=ar[j];
          ar[j]=ar[k];
          ar[k]=temp;
        }
      }
    }

    for(int i=0;i<n;i++)
    {
      printf("%d ",ar[i]);
    }
   
    return 0;
}
