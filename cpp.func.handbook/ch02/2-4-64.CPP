#include<iostream.h>
#include<string.h>

int main()
{
   char str1[20]="abcdefghiabcdefgh";
   char str2[20]="def";
   char far *s;
   int n=0;
   cout<<"The str2 is found in position:";
   s=_fstrstr(str1,str2);
   while(s)
   {
	   cout<<s-str1<<" ";
	   s=s+_fstrlen(str2);
	   s=_fstrstr(s,str2);
   }
   return 1;
}
