#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  int handle;
  long len;
  handle=open("temp.txt",O_RDWR);              //�Զ�д�ķ�ʽ���ļ�temp.txt
  len=filelength(handle);
  cout<<"The length of file temp.txt is:"<<len<<endl;  //��ʾtemp.txt�ļ��Ĵ�С
  close(handle);               //�ر��ļ�
  return 0;
}
