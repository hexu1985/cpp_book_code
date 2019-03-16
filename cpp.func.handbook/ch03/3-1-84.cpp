#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>

int print(char *format,...)       //用于字符串打印到屏幕
{
	va_list argptr;
	va_start(argptr,format);     //提供参数表的访问
	vfprintf(stdout,format,argptr);  //格式化打印字符串
	va_end(argptr);          //结束对参数表的访问
	return 0;
}

int scan(char *format,...)   //用于读入格式化字符串
{
	va_list argptr;
	va_start(argptr,format);       //提供参数表的访问
	vfscanf(stdin,format,argptr);    //格式化读入字符串 
	va_end(argptr);         //结束对参数表的访问
	return 0;
}

int main()
{
	char buf[20];
	cout<<"Please enter a string: ";
	scan("%s",buf);
	cout<<"What you insert is: ";
    print("%s",buf);         //调用子程序，将字符串打印到屏幕
	return 0;
}
