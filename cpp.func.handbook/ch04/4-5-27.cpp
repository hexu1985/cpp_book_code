#include<iostream.h>
#include<stdlib.h>

int main()
{
    char *file="child.exe";
	char path[100];
	_searchenv(file,"INCLUDE",path);    //查找文件child.exe
	if(path)         //当找到文件时
	{
		cout<<"The file's path is: "<<endl;
		cout<<path<<endl;
	}
	else           //当找不到时
		cout<<"File is not found!"<<endl;
	return 0;
}
