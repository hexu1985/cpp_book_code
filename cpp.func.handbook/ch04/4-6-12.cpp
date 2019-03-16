#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define LEN 1000

int main()
{
	char destin[LEN];
	cout<<"line 1"<<endl;
	cout<<"line 2"<<endl;
	cout<<"line 3"<<endl;
	cout<<"line 4"<<endl;
	gettext(1,1,4,10,destin);
	cout<<"Please any key to put the destin to screen!"<<endl;
	getche();
	clrscr();
	puttext(2,1,5,10,destin);
	return 0;
}
