#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  int handle;
  char buf[20];
  long position;
  handle=open("temp.txt",O_RDONLY);  //�Զ��ķ�ʽ��temp.txt�ļ�
  read(handle,buf,2);              //���ļ��ж�ȡһ���ַ�
  position=tell(handle);         //ȡ���ļ�ָ��ĵ�ǰλ��
  cout<<"The file pointer's position is:"<<position<<endl;  //��ʾ������
  close(handle);               //�ر��ļ�
  return 0;
}
