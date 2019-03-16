#include<iostream.h>
#include<string.h>

int main()
{
   char *src="This is an example";
   char dest[40];
   char *ptr;
   ptr=(char *)memcpy(dest,src,strlen(src));
   if(ptr)
   {
	   cout<<"Success!"<<endl;
	   dest[strlen(src)]='\0';
	   cout<<"The dest's content is:"<<dest<<endl;
   }
   else
       cout<<"Fail!"<<endl;
   return 0;
}
