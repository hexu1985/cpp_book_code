#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>

int print(char *buffer,char *format,...)       //�����ַ��������buffer��ȥ
{
	va_list argptr;
	va_start(argptr,format);     //�ṩ������ķ���
	vsprintf(buffer,format,argptr);  //��ʽ����ӡ�ַ���
	va_end(argptr);          //�����Բ�����ķ���
	return 0;
}

int scan(char *buffer,char *format,...)   //���ڶ����ʽ���ַ���
{
	va_list argptr;             
	va_start(argptr,format);       //�ṩ������ķ���
	vsscanf(buffer,format,argptr);    //��ʽ�������ַ��� 
	va_end(argptr);         //�����Բ�����ķ���
	return 0;
}

int main()
{
	char buf[20];
	char *buffer="This is a test";
	char result[30];
	scan(buffer,"%s",buf);         //�����ӳ��򣬶����ַ�����buf
    print(result,"%s",buf);         //�����ӳ��򣬽��ַ��������result��
	cout<<"The result is:"<<result<<endl;
	return 0;
}
