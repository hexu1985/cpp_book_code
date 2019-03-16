#include<iostream.h>
#include<conio.h>

int main()
{
	int i;
	cout<<"If you choice the low video press 1"<<endl;
  cout<<"If you choice the normal video press 2"<<endl;
	cout<<"If you choice the high video press 3"<<endl;
	cin>>i;          //读入整数i
	clrscr();         //清屏
	switch(i)       //下面对不同的i，设置不同的亮度
	{
	case 1:  lowvideo();
             cout<<"Its the low video!"<<endl;break;
	case 2:  normvideo();
	         cout<<"Its the normal video!"<<endl;break;
	case 3:  highvideo();
	         cout<<"Its the high video!"<<endl;break;
	}
	return 0;
}
