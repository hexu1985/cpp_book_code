#include<iostream.h>
#include<string.h>

int main()
{
   char far *string="This is an example";
   char c='a';
   char far *ptr;
   ptr=(char far *)_fmemchr(string,c,_fstrlen(string));
   if(ptr)
   {
	   cout<<"The charcter '"<<c<<"' is found"<<endl;
	   cout<<"It is at position:"<<(ptr-string)<<endl;
   }
   else
   {
	   cout<<"The charcter '"<<c<<"' is not found"<<endl;
   }
   return 0;
} 
