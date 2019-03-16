#include<iostream.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[50]="This is a test!";
	char str2[50]="please press any key";
	int len=strlen(str1);
	cout<<str1<<str2;
	gotoxy(len+1,1);
	getche();
	clreol();
	return 0;
}
