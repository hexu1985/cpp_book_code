#include<iostream.h>
#include<stdio.h>

int main()
{
	char *string="for sprintf";
	char buf[30];
    sprintf(buf,"This is a test %s\n",string);       //使用printf打印一些字符串到stdout流中去
	cout<<"The buf is: "<<buf<<endl;
	return 0;
}
