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
    unsigned drive;
    unsigned ndrives;
	_dos_getdrive(&drive);        //取得当前的驱动器号
	cout<<"The curren drive is :";
	print(drive);        //调用子程序来打印当前的驱动器
	cout<<endl;

	drive++;
    _dos_setdrive(drive,&ndrives);           //新设置当前的驱动器
	_dos_getdrive(&drive);        //取得当前的驱动器号
	cout<<"Now drive is :";
	print(drive);   //调用子程序来打印当前的驱动器
        cout<<endl;
	cout<<"The number of drives is: "<<ndrives<<endl;

	return 0;
}
