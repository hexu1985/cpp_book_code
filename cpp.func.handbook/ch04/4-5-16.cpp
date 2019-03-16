#include<iostream.h>
#include<dir.h>

int main()
{
    char *file="child.exe";
	char *path;
	path=searchpath(file);
	if(path)
	{
		cout<<"The file's path is: "<<path<<endl;
	}
	else
		cout<<"File is not found!"<<endl;
	return 0;
}
