#include<iostream.h>
#include<stdio.h>
#include<conio.h>

int main()
{
    int temp1,temp2,newattr;
	temp1=BLUE;
	temp2=RED;
	newattr=(temp1<<4)+temp2+BLINK;
	textattr(newattr);
	cprintf("This is a test!\n");
	return 0;
}
