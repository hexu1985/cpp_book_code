#include<iostream.h>
#include<direct.h>

int main()
{
    int buflen=40;
	char buf[40];
	char *flag;
	flag=_getdcwd(0,buf,buflen);
	if(flag)    //当成功取得时
		cout<<"The current directory is:"<<buf<<endl;
	else     //失败时
		cout<<"Some error occur!"<<endl;
	return 0;
}
