#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>
char buffer[40];

int sprint(char *format,...)       //�����ַ��������buffer�ַ�����
{
	va_list argptr;
	va_start(argptr,format);     //�ṩ������ķ���
	vsprintf(buffer,format,argptr);  //�Ѹ�ʽ���ַ�д�뵽buffer��ȥ
	va_end(argptr);          //�����Բ�����ķ���
	return 0;
}
int main()
{
  char *str="This is a test";
  sprint("%s",str);         //�����ӳ��򣬽��ַ���д�뵽buffer��ȥ
  cout<<"The buffer's is: "<<buffer<<endl;
  return 0;
}
