#include<iostream.h>
#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<sys\stat.h>

int main()
{
  int handle;
	char str[20];
	handle=_open("temp.txt",O_RDONLY);       //以只读的方式打开文件temp.txt
	int len=3;
	read(handle,str,len);                      //从文件temp.txt中读取len长度的字符
	str[len]='\0';
	cout<<"The str is:"<<str<<endl;           //显示该字符
	_close(handle);          //关闭文件
	return 0;
}
