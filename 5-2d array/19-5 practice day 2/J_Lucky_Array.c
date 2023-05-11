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
    int m=ar[0];
    for(int i=0; i<n; i++)
    {
      if(ar[i]<m)
      {
        m=ar[i];
      }
    }
    int flag=0;
    for(int i=0; i<n; i++)
    {
      if(m==ar[i])
      {
        flag++;
      }
    }
    if(flag%2==0) printf("Unlucky");
    else printf("Lucky");
   
    return 0;
}