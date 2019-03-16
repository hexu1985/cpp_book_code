#include<iostream.h>
#include<direct.h>

int main()
{
    int drive;
	drive=_getdrive();
	char d;
	d='A'+drive-1;       //用d来求出drive对应的盘符
	cout<<"The current drive is:"<<d<<endl;
	return 0;
}
