#include<iostream.h>
#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<sys\stat.h>
#include<share.h>

int main()
{
  int handle;
	char str[20];
	handle=sopen("temp.txt",O_RDONLY,SH_DENYNO);       //��ֻ���ķ�ʽ���ļ�temp.txt
	int len=3;
	read(handle,str,len);                      //���ļ�temp.txt�ж�ȡlen���ȵ��ַ�
	str[len]='\0';
	cout<<"The str is:"<<str<<endl;           //��ʾ���ַ�
	close(handle);          //�ر��ļ�
	return 0;
}
