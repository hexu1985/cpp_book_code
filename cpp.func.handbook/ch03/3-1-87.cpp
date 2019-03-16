#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>
char buffer[40];

int sprint(char *format,...)       //用于字符串输出到buffer字符串中
{
	va_list argptr;
	va_start(argptr,format);     //提供参数表的访问
	vsprintf(buffer,format,argptr);  //把格式化字符写入到buffer中去
	va_end(argptr);          //结束对参数表的访问
	return 0;
}
int main()
{
  char *str="This is a test";
  sprint("%s",str);         //调用子程序，将字符串写入到buffer中去
  cout<<"The buffer's is: "<<buffer<<endl;
  return 0;
}
