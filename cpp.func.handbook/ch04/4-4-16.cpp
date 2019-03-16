#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char *argv[])
{
	cout<<"Calling child process from "<<endl;
	cout<<argv[0]<<endl;
	int result;
	int mode=P_WAIT;
	result=spawnlp(mode,"child.exe","1","2","3",NULL);     //用p_wait的方式打开一个子[进程
	if(result==-1)             //当调用失败时
	{
		perror("Some error occur!\n");
		exit(1);
	}
	else               //当调用成功时
	     cout<<"This is the end of the program!"<<endl;
	return 0;
}
