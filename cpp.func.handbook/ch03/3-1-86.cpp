#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>

int print(char *format,...)       //�����ַ�����ӡ����Ļ
{
	va_list argptr;
	va_start(argptr,format);     //�ṩ������ķ���
	vprintf(format,argptr);  //��ʽ����ӡ�ַ���
	va_end(argptr);          //�����Բ�����ķ���
	return 0;
}

int scan(char *format,...)   //���ڶ����ʽ���ַ���
{
	va_list argptr;               //�ṩ������ķ���
	va_start(argptr,format);       //�ṩ������ķ���
	vscanf(format,argptr);    //��ʽ�������ַ��� 
	va_end(argptr);         //�����Բ�����ķ���
	return 0;
}

int main()
{
	char buf[20];
	cout<<"Please enter a string: ";
	scan("%s",buf);         //�����ӳ��򣬶����ַ���
	cout<<"What you insert is: ";
  print("%s",buf);         //�����ӳ��򣬽��ַ�����ӡ����Ļ
	return 0;
}
