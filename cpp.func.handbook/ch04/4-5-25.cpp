#include<iostream.h>
#include<direct.h>

int main()
{
    int drive;
	drive=_getdrive();
	char d;
	d='A'+drive-1;       //��d�����drive��Ӧ���̷�
	cout<<"The current drive is:"<<d<<endl;
	return 0;
}
