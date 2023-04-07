#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    if(a<1001)
    {
        printf("Bad luck!");
    }
    else if(a>=1500)
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes\n");
    }
    else
    {
        printf("I will buy Punjabi");
    }
    
    
    
    
    

    return 0;
}