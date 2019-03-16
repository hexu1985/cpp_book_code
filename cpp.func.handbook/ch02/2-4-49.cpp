#include<stdio.h>
#include<string.h>

int main()
{
   char far *str1="This is an example";
   char far *str2="ai";
   int n,i;
   n=_fstrcspn(str1,str2);
   for(i=0;i<n;i++)printf("%c",str1[i]);
   return 0;
}  
