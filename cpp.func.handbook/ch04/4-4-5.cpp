#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
	cout<<"Calling child process from "<<endl;
	cout<<argv[0]<<endl;
	execlpe("child.exe","1","2","3",NULL,envp); //�����ӽ���child,�����ݲ���1��2��3
	perror("Some error occur!\n");     //��ʾ������Ϣ
	exit(1);
}
