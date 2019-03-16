#include<iostream.h>
#include<io.h>

int main()
{
	int result;
	result=ioctl(0,8,0,0);
	if(result==0)
		cout<<"The Default Drive is Removable"<<endl;
	else
		cout<<"The Default Drive can't be Removed"<<endl;
	return 0;
}
