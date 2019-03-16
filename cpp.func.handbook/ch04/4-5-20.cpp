#include<iostream.h>
#include<dir.h>
#include<dos.h>

int main()
{
	find_t ffblk;
    int flag;
	flag=_dos_findfirst("*.cpp",_A_RDONLY,&ffblk);
    int num=0;
	if(flag==0)
	{
		do
		{
			num++;
			flag=_dos_findnext(&ffblk);
		}while(flag==0);              //当还有以cpp为后缀的文件时
		cout<<"There "<<num<<" files are found!"<<endl;
	}
	else
		cout<<"There is no such file!"<<endl;
	return 0;
}
