#include<stdio.h>
#include<string.h>

int main()
{
   char string[40];
   char c='+';
   int n=10;
   char far *s;
   s=_fstrnset(string,c,n);
   s[n]='\0';
   printf("After memset The string is: %s\n",s);
   return 1;
}
