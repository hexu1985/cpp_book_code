#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char *argv[])
{
	cout<<"Calling child process from "<<endl;
	cout<<argv[0]<<endl;
	execlp("child.exe","1","2","3",NULL); //�����ӽ���child,�����ݲ���1��2��3
	perror("Some error occur!\n");
	exit(1);
}
