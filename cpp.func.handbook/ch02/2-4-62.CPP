#include<stdio.h>
#include<string.h>

int main()
{
   char string[20]="This is a test";
   char ch='+';
   int n,i;
   n=_fstrlen(string);
   _fstrset(string,ch);
   printf("%s\n",string);
   return 1;
}
