#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *str;
	long len=1000000000;
	str=(char *)malloc(sizeof(str)*len);        //开辟一个大的空间
	if(!str)          //当分配不够时
	{
		cout<<"Not enough space!"<<endl;
		abort();
	}
	else         //成功分配时
	{
		cout<<"Success!"<<endl;
		free(str);    //释放开辟的空间
	}
	return 0;
}
