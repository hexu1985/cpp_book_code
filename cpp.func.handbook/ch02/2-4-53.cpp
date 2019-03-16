#include<stdio.h>
#include<string.h>

int main()
{
   char string[20]="This is an example";
   printf("After strlwr,the result is:\n");
   printf("%s\n",_fstrlwr(string));
   return 0;
} 
