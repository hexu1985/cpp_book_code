#include<stdio.h>
#include<string.h>

int main()
{
   char string[20]="This is an example";
   printf("After strupr,the result is:\n");
   printf("%s\n",strupr(string));
   return 1;
}
