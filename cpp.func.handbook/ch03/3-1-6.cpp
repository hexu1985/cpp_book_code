#include<iostream.h>
#include<io.h>
#include<fcntl.h>

int main()
{
   int handle;
   handle=open("temp.txt",O_CREAT);
   if(close(handle)==0)
	   cout<<"Success to close temp.txt!"<<endl;
   else
	   cout<<"error occur when trying to close temp.txt"<<endl;
   return 0;
}
