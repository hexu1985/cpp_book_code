#include<iostream.h>
#include<dir.h>
#include<direct.h>

int print(int drive)       //用于打印由drive所指定的驱器名称
{
	char ch;
	ch='A'+drive;
	cout<<ch;
	return 0;
}

int main()
{
    int drive;
	drive=getdisk();        //取得当前的驱动器号
	cout<<"The curren drive is :";
	print(drive);        //调用子程序来打印当前的驱动器
	cout<<endl;

	_chdrive(drive+2);           //新设置当前的驱动器
	drive=getdisk();        //取得当前的驱动器号
	cout<<"Now drive is :";
	print(drive);   //调用子程序来打印当前的驱动器
	cout<<endl;
	
	return 0;
}
