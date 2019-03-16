#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define LEN 1000

int main()
{
    gotoxy(2,2);
	text_info ti;
	gettextinfo(&ti);
	printf("x: %d\n",ti.curx);
    printf("y: %d\n",ti.cury);
	return 0;
}
