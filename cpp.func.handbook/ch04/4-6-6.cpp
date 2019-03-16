#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define LEN 1000

int main()
{
 gotoxy(2,2);                //让光标到达屏幕上坐标为(2,2)的位置
	text_info ti;
	gettextinfo(&ti);            //取得文本模式的信息
	printf("x: %d\n",ti.curx);     //打印出光标的水平位置
 printf("y: %d\n",ti.cury);   //打印出光标的垂直位置
	return 0;
}
