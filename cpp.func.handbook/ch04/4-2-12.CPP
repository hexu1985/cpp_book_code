#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
    date datep1,datep2;
    getdate(&datep1);         //先保存当前的时间设置。
	datep2.da_year=2002;       //下面设定datep2的值
	datep2.da_day=1;
	datep2.da_mon=1;
	cout<<"Now set the time of systme!"<<endl;
	cout<<"Press any key to continue!"<<endl;
    char ch=getch();
	setdate(&datep2); 
	
    cout<<"Now set the time of systme again!"<<endl;
	cout<<"Press any key to continue!"<<endl;
    ch=getch();
	setdate(&datep1); //恢复原来的时间设置
	return 0;
}
