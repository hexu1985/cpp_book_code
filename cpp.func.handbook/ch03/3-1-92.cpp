#include<iostream.h>
#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<sys\stat.h>

int main()
{
  int handle;
	char str[20];
	handle=_open("temp.txt",O_RDONLY);       //��ֻ���ķ�ʽ���ļ�temp.txt
	int len=3;
	read(handle,str,len);                      //���ļ�temp.txt�ж�ȡlen���ȵ��ַ�
	str[len]='\0';
	cout<<"The str is:"<<str<<endl;           //��ʾ���ַ�
	_close(handle);          //�ر��ļ�
	return 0;
}
