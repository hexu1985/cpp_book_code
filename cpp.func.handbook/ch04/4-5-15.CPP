#include<iostream.h>
#include<dir.h>

int main()
{
    char *path="rm.txt";
	int flag;
	if(mkdir(path)==0)
	{
		flag=rmdir(path);
		if(flag==0)
			cout<<"Success to delete the file"<<endl;
	}
	else
		cout<<"Some error occur when creating a file"<<endl;
	return 0;
}
