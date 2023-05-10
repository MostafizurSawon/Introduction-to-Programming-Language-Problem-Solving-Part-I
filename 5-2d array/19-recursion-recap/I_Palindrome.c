#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    scanf("%s", a);
    int an=1;
    for(int i=0,j=strlen(a)-1;i<j;i++,j--)
    {
      if(a[i]!=a[j])
      {
        an=0;
        break;
      }
    }
    if(an==1) printf("YES");
    else printf("NO");
   
    return 0;
}