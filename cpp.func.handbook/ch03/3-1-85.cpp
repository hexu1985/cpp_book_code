#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>

int print(char *format,...)       //�����ַ�����ӡ����Ļ
{
	va_list argptr;
	va_start(argptr,format);     //�ṩ������ķ���
	vprintf(format,argptr);  //��ӡ��ʽ���ַ�
	va_end(argptr);          //�����Բ�����ķ���
	return 0;
}
int main()
{
	char *str="This is a test\n";
    print("%s",str);         //�����ӳ��򣬽��ַ�����ӡ����Ļ
	return 0;
}
