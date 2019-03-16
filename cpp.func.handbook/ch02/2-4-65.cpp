#include<stdio.h>
#include<string.h>

int main()
{
   char str1[20]="abcdef,ghi.abcdefgh";
   char str2[20]=",d.";
   char far *result;
   printf("The words in str1 are listed below:\n");
   result=_fstrtok(str1,str2);
   while(result)
   {
	   printf("%s\n",result);
	   result=_fstrtok(NULL,str2);
   }
   return 1;
}
