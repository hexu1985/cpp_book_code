#include<iostream.h>
#include<dir.h>
#include<direct.h>

int print(int drive)       //���ڴ�ӡ��drive��ָ������������
{
	char ch;
	ch='A'+drive;
	cout<<ch;
	return 0;
}

int main()
{
    int drive;
	drive=getdisk();        //ȡ�õ�ǰ����������
	cout<<"The curren drive is :";
	print(drive);        //�����ӳ�������ӡ��ǰ��������
	cout<<endl;

	_chdrive(drive+2);           //�����õ�ǰ��������
	drive=getdisk();        //ȡ�õ�ǰ����������
	cout<<"Now drive is :";
	print(drive);   //�����ӳ�������ӡ��ǰ��������
	cout<<endl;
	
	return 0;
}