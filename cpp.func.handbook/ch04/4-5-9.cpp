#include<iostream.h>
#include<dir.h>

int main()
{
    int drive;
	drive=getdisk();
	char d;
	d='A'+drive;
	cout<<"The current drive is:"<<d<<endl;
	return 0;
}
