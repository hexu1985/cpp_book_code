#include<iostream.h>
#include<stdio.h>
#include<stdarg.h>

int print(char *format,...)
{
	va_list argptr;
	va_start(argptr,format);
	vfprintf(stdout,format,argptr);
	va_end(argptr);
	return 0;
}
int main()
{
	char *str="This is a test\n";
    print("%s",str);
	return 0;
}
