#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *path="c:\\book\\c\\fnmerge.cpp";
	char drive[20];
    char dir[20];
    char name[20];
	char ext[20];
    _splitpath(path,drive,dir,name,ext);
	cout<<"The drive is: "<<drive<<endl;
	cout<<"The dir is: "<<dir<<endl;
	cout<<"The name is: "<<name<<endl;
	cout<<"The ext is: "<<ext<<endl;
	return 0;
}
