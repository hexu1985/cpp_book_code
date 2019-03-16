#include<iostream.h>
#include<stdio.h>
#include<conio.h>

int print_mode(int mode)
{
	switch(mode)
	{
	case 0:cout<<"BW40 mode";break;
	case 1:cout<<"C40 mode";break;
	case 2:cout<<"BW80 mode";break;
	case 3:cout<<"C80 mode";break;
	case 7:cout<<"MONO mode";break;
	case 64:cout<<"C4350 mode";break;
	}
}

int main()
{
	text_info ti;
	gettextinfo(&ti);
	print_mode(ti.currmode);
	cout<<endl;

    cout<<"Please any key to continue"<<endl;
	getch();
	textmode(BW80);

	gettextinfo(&ti);
	cout<<"The current mode is: ";
	print_mode(ti.currmode);
	cout<<endl;
	return 0;
}
