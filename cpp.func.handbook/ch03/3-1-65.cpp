#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
    int handle;
	char *oldname="oldname.txt";
	char *newname="newname.txt";
	handle=open(oldname,O_CREAT,S_IWRITE);
	close(handle);
	if(rename(oldname,newname)==0)
		cout<<"Success to rename"<<endl;
	else
		cout<<"Fail to rename"<<endl;
	return 0;
}
