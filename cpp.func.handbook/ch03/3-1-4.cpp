#include<iostream.h>
#include<string.h>
#include<sys\stat.h>
#include<io.h>

int main()
{
   int handle;
   long size;
   char buffer[20]="123456789";
   char result[20];
   handle=creat("size.txt",S_IWRITE);   
   write(handle,buffer,strlen(buffer));
   size=5;
   if(chsize(handle,size)==0)
	   cout<<"Success to be modified"<<endl;
   else
	   cout<<"Fail to be modified"<<endl;
   return 0;
}
