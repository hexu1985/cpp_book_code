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
	result=spawnl(mode,"child.exe","1","2","3",NULL);
	if(result==-1)
	{
		perror("Some error occur!\n");
		exit(1);
	}
	else
		cout<<"This is the end of the program!"<<endl;
	return 0;
}
