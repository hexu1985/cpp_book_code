#include<iostream.h>
#include<dir.h>

int main()
{
	char path[50];
	char *drive="c:";
    char *dir="\\book\\c";
    char *name="fnmerge";
	char *ext=".cpp";
    fnmerge(path,drive,dir,name,ext);
	cout<<"The path is: "<<path<<endl;
	return 0;
}
