#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>

int print(char *format,...)       //用于字符串打印到屏幕
{
	va_list argptr;
	va_start(argptr,format);     //提供参数表的访问
	vprintf(format,argptr);  //打印格式化字符
	va_end(argptr);          //结束对参数表的访问
	return 0;
}
int main()
{
	char *str="This is a test\n";
    print("%s",str);         //调用子程序，将字符串打印到屏幕
	return 0;
}
