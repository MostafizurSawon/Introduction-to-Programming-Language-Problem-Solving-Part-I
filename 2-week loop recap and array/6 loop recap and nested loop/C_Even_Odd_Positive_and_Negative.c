#include<stdio.h>

int main()
{
    int n,e=0,o=0,p=0,ne=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &i);
        if(i%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(i>0)
        {
            p++;
        }
        else if(i<0)
        {
            ne++;
        }

    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",e,o,p,ne);
   
    return 0;
}