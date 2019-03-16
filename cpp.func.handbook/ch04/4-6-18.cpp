#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int x,y;
    cout<<"This is a test!"<<endl;
	cout<<"Please any key!";          //让用户按下键盘再继续
	getch();
	x=wherex();                 //取得当前光标的水平位置
	y=wherey();                 //取得当前光标的垂直位置
	cout<<endl;
	cout<<"The coordinate before you press the key is: (";
	cout<<x<<","<<y<<")"<<endl;
	return 0;
}
