#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char *argv[])
{
	cout<<"Calling child process from "<<endl;
	cout<<argv[0]<<endl;
	char av[5][3]={"1","2","3"};
	execvp("child.exe",argv); //�����ӽ���child,�����ݲ���1��2��3
	perror("Some error occur!\n");     //��ʾ������Ϣ
	exit(1);
}
