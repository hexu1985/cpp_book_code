#include<iostream.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
   int stat;
   int handle;
   handle=open("temp.txt",O_WRONLY);
   stat=setmode(handle,O_TEXT);
   if(stat==0)                  //成功时
	   cout<<"Success!"<<endl;
   else                       //失败时
	   cout<<"Fail!"<<endl;
   return 0;
}
