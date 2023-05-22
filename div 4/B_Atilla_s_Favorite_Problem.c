#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
      int max=0;
      int a;
      scanf("%d",&a);
      char b[a+1];
      scanf("%s",b);
      for(int j=0; j<a; j++)
      {
        if(b[j]>max) max=b[j];
      }
      printf("%d\n",max-96);
    }
   
    return 0;
}