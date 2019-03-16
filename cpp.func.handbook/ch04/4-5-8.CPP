#include<iostream.h>
#include<dir.h>

int main()
{
    int buflen=40;
	char buf[40];
	char *flag;
	flag=getcwd(buf,buflen);
	if(flag)
		cout<<"The current directory is:"<<buf<<endl;
	else
		cout<<"Some error occur!"<<endl;
	return 0;
}
