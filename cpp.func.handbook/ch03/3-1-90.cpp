#include<iostream.h>
#include<io.h>
#include<fcntl.h>

int main()
{
   int handle;
   handle=open("temp.txt",O_RDONLY);        //打开temp.txt文件
   if(_close(handle)==0)                    //当关闭成功时
	   cout<<"Success to close temp.txt!"<<endl;
   else                                //失败时
	   cout<<"error occur when trying to close temp.txt"<<endl;
   return 0;
}
