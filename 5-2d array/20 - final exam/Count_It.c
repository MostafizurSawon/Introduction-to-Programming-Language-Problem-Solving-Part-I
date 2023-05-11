#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    gets(a);
    // printf("%s",a);
    int ar[3]={0,0,0};
    for(int i=0; i<strlen(a); i++)
    {
      if(a[i]>96)
      {
        ar[1]++;
      }
      else if(a[i]>64)
      {
        ar[0]++;
      }
      else
      {
        ar[2]++;
      }
    }
    printf("Capital - %d\n",ar[0]);
    printf("Small - %d\n",ar[1]);
    printf("Spaces - %d\n",ar[2]);
   
    return 0;
}