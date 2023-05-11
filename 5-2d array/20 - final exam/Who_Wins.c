#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int winner=0;
    for(int i = 0; i < n ; i++)
    {
      int x,y;
      scanf("%d %d",&x,&y);
      if(x>y)
      {
        winner++;
      } 
      else if(x<y)
      {
        winner--;
      }
      // printf("%d ", winner);
    }

    
    if(winner==0) printf("Draw");
    else if(winner<0) printf("Pathan");
    else printf("Tiger");
    
   
    return 0;
}