#include<stdio.h>
#include<string.h>

int main()
{
   char string[40];
   char c='a';
   int n=10;
   char far *ptr;
   ptr=(char far*)_fmemset(string,c,n);
   string[n]='\0';
   printf("After memset The string is: %s",ptr);
   return 0;
}
