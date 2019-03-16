#include<iostream.h>
#include<dir.h>
#include<errno.h>

int main()
{
    char *path="mkdir";
	int flag;
	flag=mkdir(path);
	if(flag==0)
	{
		cout<<"Creat the file success!"<<endl;
	}
	else
	{
		if(errno==EACCES)
			cout<<"You do not have the property"<<endl;
		if(errno==ENOENT)
			cout<<"There is no such file!"<<endl;
	}
	return 0;
}
