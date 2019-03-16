#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int handle;
	char str[20]="This is a test";
    handle=open("temp2.txt",O_WRONLY);   //以只写的方式打开文件temp2.txt，temp2里不含任何内容 
	int num;
	num=_write(handle,str,strlen(str));       //让数据添加到流stream中
	if(num!=-1)
        cout<<"There "<<num<<"bits are writed"<<endl;
	else
		cout<<"Some error occur!"<<endl;
	close(handle);             //关闭文件
	return 0;
}
