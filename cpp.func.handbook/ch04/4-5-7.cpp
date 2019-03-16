#include<iostream.h>
#include<dir.h>

int main()
{
    int drive=0;
	char directory[40];
	getcurdir(drive,directory);
	cout<<"The current directory is:"<<directory<<endl;
	return 0;
}
