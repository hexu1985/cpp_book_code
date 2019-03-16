#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  int handle;
	char buf[20];
	unsigned len;
	len=10;
	handle=open("temp.txt",O_RDONLY);    //以只读的方式打开文件temp.txt
 int num;
	num=_read(handle,buf,len);               //从temp.txt中读取字符串到buf中去
 if(num!=-1)                         //成功时
	{
		buf[num]='\0';
		cout<<"The buf is: "<<buf<<endl;     //显示buf中的内容 
	}
	else                               //失败时
		cout<<"Some error occur!"<<endl;
	close(handle);             //关闭文件
	return 0;
}
