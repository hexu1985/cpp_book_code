#include<iostream.h>
#include<stdio.h>

int main()
{
	char *string="for sprintf";
	char buf[30];
    sprintf(buf,"This is a test %s\n",string);       //ʹ��printf��ӡһЩ�ַ�����stdout����ȥ
	cout<<"The buf is: "<<buf<<endl;
	return 0;
}
