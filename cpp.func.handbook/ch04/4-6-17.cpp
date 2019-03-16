#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define LEN 1000

int main()
{
	int x,y;
    cout<<"This is a test!"<<endl;
	cout<<"Please any key!";
	getch();
	x=wherex();
	y=wherey();
	cout<<endl;
	cout<<"The coordinate before you press the key is: (";
	cout<<x<<","<<y<<")"<<endl;
	return 0;
}
