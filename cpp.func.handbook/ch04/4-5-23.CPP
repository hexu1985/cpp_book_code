#include<iostream.h>
#include<dos.h>

int print(int drive)       //���ڴ�ӡ��drive��ָ������������
{
	char ch;
	ch='A'+drive-1;
	cout<<ch;
	return 0;
}

int main()
{
    unsigned drive;
    unsigned ndrives;
	_dos_getdrive(&drive);        //ȡ�õ�ǰ����������
	cout<<"The curren drive is :";
	print(drive);        //�����ӳ�������ӡ��ǰ��������
	cout<<endl;

	drive++;
    _dos_setdrive(drive,&ndrives);           //�����õ�ǰ��������
	_dos_getdrive(&drive);        //ȡ�õ�ǰ����������
	cout<<"Now drive is :";
	print(drive);   //�����ӳ�������ӡ��ǰ��������
        cout<<endl;
	cout<<"The number of drives is: "<<ndrives<<endl;

	return 0;
}