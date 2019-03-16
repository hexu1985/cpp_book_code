#include<iostream.h>
#include<dirent.h>
#include<dir.h>
#include<string.h>
#include<stdio.h>

int main()
{
	DIR *dirp;
	dirp=opendir("//c");
	if(dirp)
	{
		cout<<"success to open the dir stream!"<<endl;
	    closedir(dirp);
	}
	else
		cout<<"Fail to opendir"<<endl;
	return 0;
}
