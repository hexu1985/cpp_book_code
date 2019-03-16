#include<iostream.h>
#include<string.h>

int main()
{
   char *src="This is an example";
   char dest[40];
   char *ptr;
   ptr=(char *)memccpy(dest,src,'a',strlen(src));
   if(ptr)
   {
	   *ptr='\0';
	   cout<<"The character was found"<<endl;
	   cout<<"The dest's content is:"<<dest<<endl;
   }
   else
   {
	   *ptr='\0';
	   cout<<"The character was not found"<<endl;
	   cout<<"The dest's content is:"<<dest<<endl;
   }
   return 0;
}  
