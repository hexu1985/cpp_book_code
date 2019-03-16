#include<iostream.h>
#include<dir.h>
#include<dos.h>

int main()
{
	ffblk ffblk;
    int flag;
	flag=findfirst("*.cpp",&ffblk,FA_RDONLY);
    int num=0;
	if(flag==0)
	{
		do
		{
			num++;
			flag=findnext(&ffblk);
		}while(flag==0);
		cout<<"There "<<num<<" files are found!"<<endl;
	}
	else
		cout<<"There is no such file!"<<endl;
	return 0;
}
