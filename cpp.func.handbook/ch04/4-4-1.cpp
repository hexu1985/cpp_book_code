#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *str;
	long len=1000000000;
	str=(char *)malloc(sizeof(str)*len);        //����һ����Ŀռ�
	if(!str)          //�����䲻��ʱ
	{
		cout<<"Not enough space!"<<endl;
		abort();
	}
	else         //�ɹ�����ʱ
	{
		cout<<"Success!"<<endl;
		free(str);    //�ͷſ��ٵĿռ�
	}
	return 0;
}
