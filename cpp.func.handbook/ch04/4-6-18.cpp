#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int x,y;
    cout<<"This is a test!"<<endl;
	cout<<"Please any key!";          //���û����¼����ټ���
	getch();
	x=wherex();                 //ȡ�õ�ǰ����ˮƽλ��
	y=wherey();                 //ȡ�õ�ǰ���Ĵ�ֱλ��
	cout<<endl;
	cout<<"The coordinate before you press the key is: (";
	cout<<x<<","<<y<<")"<<endl;
	return 0;
}
