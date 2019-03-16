#include<iostream.h>
#include<dir.h>

int main()
{
	char tem[40];
	char *result;
	result=mktemp(tem);
	if(result)
	{
		cout<<"The unique filename is: "<<tem<<endl;
	}
	else
		cout<<"Some error occur!"<<endl;
	return 0;
}
