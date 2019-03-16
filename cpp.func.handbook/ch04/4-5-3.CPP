#include<iostream.h>
#include<dir.h>
#include<dos.h>

int main()
{
	ffblk ffblk;
    findfirst("*.cpp",&ffblk,FA_RDONLY);
	cout<<"The filename is :"<<ffblk.ff_name<<endl;
	cout<<"The filesize is :"<<ffblk.ff_fsize<<endl;
	return 0;
}
