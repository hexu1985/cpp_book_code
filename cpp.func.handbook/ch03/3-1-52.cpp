#include<iostream.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	cout<<"Please insert a character:"<<endl;
	while(kbhit()!=0);
    ch=getch();
	cout<<"The character you insert is:"<<ch<<endl;
	return 0;
}
