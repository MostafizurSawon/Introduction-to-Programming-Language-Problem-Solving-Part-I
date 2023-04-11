#include<stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'z' || c == 'Z')
    {
        if(c=='Z')
        {
            printf("A");
        }
        else
        {
            c=97;
            printf("%c",c);
        }
    }
    else{
        printf("%c", c+1);
    }
   
    return 0;
}

/*
Problem###
Have to print next alphabetic characters. If input is "z" then have to print "a"
*/