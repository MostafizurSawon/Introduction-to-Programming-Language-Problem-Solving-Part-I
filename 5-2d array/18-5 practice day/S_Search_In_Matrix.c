#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];

    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        scanf("%d",&ar[i][j]);
      }
    }

    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        if(n==ar[i][j])
        {
          flag=1;
        }
      }
      
    }
  
  if(flag==0)
  {
    printf("will take number");
  }
  else
  {
    printf("will not take number");
  }

    return 0;
}