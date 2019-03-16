#include<iostream.h>
#include<dos.h>

int main()
{
	find_t ffblk;
    _dos_findfirst("*.cpp",_A_RDONLY,&ffblk);
	cout<<"The filename is :"<<ffblk.name<<endl;
	cout<<"The filesize is :"<<ffblk.size<<endl;
	return 0;
}
