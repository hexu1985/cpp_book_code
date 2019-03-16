#include<stdio.h>
#include<string.h>

int main()
{
   char string[40]="This is a test";
   char far *str;
   printf("The reversed string is: %s\n",_fstrrev(string));
   return 1;
}
