#include<stdio.h>

int main()
{
    int n,even=0,odd=0,x;
    scanf("%d", &n);
    
    for(int i=0; i<n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            even=even+x;
        }
        else
        {
            odd=odd+x;
        }
    }
    printf("%d %d",even,odd);
    
   
    return 0;
}