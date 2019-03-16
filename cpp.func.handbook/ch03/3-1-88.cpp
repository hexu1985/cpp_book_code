#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>

int print(char *buffer,char *format,...)       //用于字符串输出到buffer中去
{
	va_list argptr;
	va_start(argptr,format);     //提供参数表的访问
	vsprintf(buffer,format,argptr);  //格式化打印字符串
	va_end(argptr);          //结束对参数表的访问
	return 0;
}

int scan(char *buffer,char *format,...)   //用于读入格式化字符串
{
	va_list argptr;             
	va_start(argptr,format);       //提供参数表的访问
	vsscanf(buffer,format,argptr);    //格式化读入字符串 
	va_end(argptr);         //结束对参数表的访问
	return 0;
}

int main()
{
	char buf[20];
	char *buffer="This is a test";
	char result[30];
	scan(buffer,"%s",buf);         //调用子程序，读入字符串到buf
    print(result,"%s",buf);         //调用子程序，将字符串输出到result中
	cout<<"The result is:"<<result<<endl;
	return 0;
}
