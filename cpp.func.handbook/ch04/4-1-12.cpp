#include<iostream.h>
#include<stdlib.h>

void print(int a[])    //��һ���ӳ������ڽ������0ֵǰ���������
{
	int i;
	for(i=0;;i++)
	{
		if(a[i]==0)
		{
			cout<<endl;
			_exit(1);              //������0ʱ���˳�����
		}
		else
			cout<<a[i]<<" ";
	}
}

int main()
{
    int a[20]={1,2,3,4,5,0,1,2,3,4};
	print(a);
	return 0;
}
