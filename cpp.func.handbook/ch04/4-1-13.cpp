#include<iostream.h>
#include<stdlib.h>
#define  maxLength 100

int main()
{
    char absPath[maxLength];
	char *relPath="\\newpath";
	_fullpath(absPath,relPath,maxLength);
	cout<<"The full path is:"<<endl;
	cout<<absPath<<endl;
	return 0;
}
