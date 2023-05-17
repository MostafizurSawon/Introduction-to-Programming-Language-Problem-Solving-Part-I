#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s",s);
    
    for(int i=0; i<n-1; i++)
    {
      for(int j=i+1; j<n; j++)
      {
        if(s[i]>s[j])
      {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
      }
      }
    }
    printf("%s", s);
   
    return 0;
}