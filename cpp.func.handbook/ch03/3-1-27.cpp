#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  FILE *stream;
  int handle1,handle2,handle3;
  handle1=open("temp.txt",O_RDWR);              //�Զ�д�ķ�ʽ���ļ�temp.txt
  stream=fdopen(handle1,"w");                   //��stream����handle1�����
  handle2=dup(handle1);                         //����handle1��handle2��ȥ
  cout<<"The handle1 is:"<<handle1<<endl;       //��ʾhandle1��ֵ
  cout<<"The handle2 is:"<<handle2<<endl;       //��ʾhandle2��ֵ
  handle3=fileno(stream);
  cout<<"After fileno the handle of stream is:"<<handle3<<endl; //��ʾfileno(stream)��ֵ
  fclose(stream);
  return 0;
}
