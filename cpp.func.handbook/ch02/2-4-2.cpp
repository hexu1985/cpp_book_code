#include<iostream.h>
#include<string.h>

int main()
{
   char *string="This is an example";
   char c='a';
   char *ptr;
   ptr=(char *)memchr(string,c,strlen(string));
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
