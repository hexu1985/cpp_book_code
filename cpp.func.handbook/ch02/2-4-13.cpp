#include<iostream.h>
#include<string.h>

int main()
{
   char *string="This is an example";
   char c='a';
   char *ptr;
   ptr=strchr(string,c);
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
