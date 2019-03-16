#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
    time timep1,timep2;
    gettime(&timep1);         //先保存当前的时间设置。
	timep2.ti_min=1;       //下面设定timep2的值
	timep2.ti_hour=1;
	timep2.ti_hund=1;
    timep2.ti_sec=1;
	cout<<"Now set the system's time!"<<endl;
	cout<<"Press any key to continue!"<<endl;
    char ch=getch();                 //要求按下键盘
	settime(&timep2); 
	
    cout<<"Now set the system's time again!"<<endl;
	cout<<"Press any key to continue!"<<endl;
    ch=getch();              //要求按下键盘
	settime(&timep1); //恢复原来的时间设置
	return 0;
}
