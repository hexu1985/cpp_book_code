#include<iostream.h>
#include<stdlib.h>

int main()
{
	char path[50];
	char *drive="c:";
    char *dir="\\book\\c";
    char *name="fnmerge";
	char *ext=".cpp";
    _makepath(path,drive,dir,name,ext);
	cout<<"The path is: "<<path<<endl;
	return 0;
}
