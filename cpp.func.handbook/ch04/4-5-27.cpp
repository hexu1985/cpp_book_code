#include<iostream.h>
#include<stdlib.h>

int main()
{
    char *file="child.exe";
	char path[100];
	_searchenv(file,"INCLUDE",path);    //�����ļ�child.exe
	if(path)         //���ҵ��ļ�ʱ
	{
		cout<<"The file's path is: "<<endl;
		cout<<path<<endl;
	}
	else           //���Ҳ���ʱ
		cout<<"File is not found!"<<endl;
	return 0;
}
