#include<stdio.h>
#include<string.h>

int is_palindrome(char nam[])
{
  int ln=strlen(nam);
  int ans=0;
  for(int i=0,j=ln-1; i<ln/2; i++,j--)
  {
    if(nam[i]!=nam[j])
    {
      ans=0;
      break;
    }
    else
    {
      ans=1;
    }
  }
  return ans;
}

int main()
{
    char str[11];
    scanf("%s",str);

    int ans=is_palindrome(str);
    if (ans==1)
    {
      printf("Palindrome");
    }
    else
    {
      printf("Not palindrome");
    }
   
    return 0;
}