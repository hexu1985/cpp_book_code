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
	handle=open("temp.txt",O_RDONLY);
    int num;
	num=read(handle,buf,len);
    if(num!=-1)
	{
		buf[num]='\0';
		cout<<"The buf is: "<<buf<<endl;
	}
	else
		cout<<"Some error occur!"<<endl;
	close(handle);             //¹Ø±ÕÎÄ¼þ
	return 0;
}
