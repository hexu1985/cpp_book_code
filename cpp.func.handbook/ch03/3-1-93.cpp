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
	handle=open("temp.txt",O_RDONLY);    //��ֻ���ķ�ʽ���ļ�temp.txt
 int num;
	num=_read(handle,buf,len);               //��temp.txt�ж�ȡ�ַ�����buf��ȥ
 if(num!=-1)                         //�ɹ�ʱ
	{
		buf[num]='\0';
		cout<<"The buf is: "<<buf<<endl;     //��ʾbuf�е����� 
	}
	else                               //ʧ��ʱ
		cout<<"Some error occur!"<<endl;
	close(handle);             //�ر��ļ�
	return 0;
}
