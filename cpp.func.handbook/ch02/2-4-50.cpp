#include<stdio.h>
#include<string.h>

int main()
{
   char far *str1="This is an example";
   char far *str2;
   str2=_fstrdup(str1);
   printf("%s\n",str2);
   delete(str2);
   return 0;
}  
