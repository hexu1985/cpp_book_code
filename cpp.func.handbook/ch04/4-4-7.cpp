#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
	cout<<"Calling child process from "<<endl;
	cout<<argv[0]<<endl;
	char av[5][3]={"1","2","3"};
	execve("child.exe",argv,envp); //�����ӽ���child,�����ݲ���1��2��3
	perror("Some error occur!\n");     //��ʾ������Ϣ
	exit(1);
}
