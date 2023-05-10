#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row, &col);
    int ar[row][col];
    int ar2[row][col];
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        scanf("%d",&ar[i][j]);
        
      }
    }
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        scanf("%d",&ar2[i][j]);
      }
    }


    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
      {
        printf("%d ",ar[i][j]+ar2[i][j]);
      }
      printf("\n");
    }
    // for(int i=0; i<row; i++)
    // {
    //   for(int j=0; j<col; j++)
    //   {
    //     printf("%d ",ar2[i][j]);
    //   }
    //   printf("\n");
    // }
    return 0;
}