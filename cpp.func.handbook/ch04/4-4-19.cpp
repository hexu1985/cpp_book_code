#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
	cout<<"Calling child process from "<<endl;
	cout<<argv[0]<<endl;
	int result;
	int mode=P_WAIT;
	result=spawnve(mode,"child.exe",argv,envp);     //��p_wait�ķ�ʽ��һ����[����
	if(result==-1)             //������ʧ��ʱ
	{
		perror("Some error occur!\n");
		exit(1);
	}
	else               //�����óɹ�ʱ
	     cout<<"This is the end of the program!"<<endl;
	return 0;
}
