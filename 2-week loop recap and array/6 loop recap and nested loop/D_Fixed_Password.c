#include<stdio.h>

int main()
{
    for (int i = 0; i <9999;i++) 
    {
        int n;
        scanf("%d",&n);
        if(n==1999)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
   
    return 0;
}