#include<iostream.h>
#include<dos.h>

int print(int drive)       //用于打印由drive所指定的驱器名称
{
	char ch;
	ch='A'+drive-1;
	cout<<ch;
	return 0;
}

int main()
{
    unsigned drivep;
	_dos_getdrive(&drivep);        //取得当前的驱动器号
	cout<<"The curren drive is :";
	print(drivep);        //调用子程序来打印当前的驱动器
	cout<<endl;	
	return 0;
}
