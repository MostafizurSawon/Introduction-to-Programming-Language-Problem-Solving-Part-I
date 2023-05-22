#include<stdio.h>

int sort(int ar[], int b)
{
  for(int i = 0; i < b-1; i++)
  {
    for(int j = i+1;j < b; j++)
    {
      if(ar[i]>ar[j])
      {
        int t=ar[i];
        ar[i]=ar[j];
        ar[j]=t;
      }
    }
  }
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
      int ar[3];
      for(int j = 0; j < 3; j++)
      {
        scanf("%d", &ar[j]);
      }
      sort(ar,3);
      printf("%d\n", ar[1]);
      
    }
   
    return 0;
}



// https://codeforces.com/contest/1760