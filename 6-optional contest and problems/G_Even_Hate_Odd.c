#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        int ar[x];
        int even=0;
        int odd=0;
        for(int j = 0; j < x; j++)
        {
            scanf("%d", &ar[j]);
            if(ar[j]%2 == 0)
            {
                even++;
            }
            else
            {
                odd++; 
            }
        }
        if((odd-even)%2==0)
        {
            int ans=(odd-even)/2;
            if(ans<0)
            {
                ans=ans*-1;
            }
            printf("%d\n",ans);
        }
        else
        {
            printf("-1\n");
        }

    }
   
    return 0;
}