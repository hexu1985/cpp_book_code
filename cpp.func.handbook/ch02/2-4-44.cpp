#include<iostream.h>
#include<string.h>

int main()
{
   char far *src="This is an example";
   char dest[40];
   char far *ptr;
   ptr=(char far *)_fmemcpy(dest,src,_fstrlen(src));
   if(ptr)
   {
	   cout<<"Success!"<<endl;
	   dest[_fstrlen(src)]='\0';
	   cout<<"The dest's content is:"<<dest<<endl;
   }
   else
       cout<<"Fail!"<<endl;
   return 0;
}
