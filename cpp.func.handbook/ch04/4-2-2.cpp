#include<iostream.h>
#include<time.h>

int main()
{
	while(1)
	{
		if(clock()/CLK_TCK>=1)           //��������1�룬��while�����������
		{
			cout<<"It has passed 1 seconds!"<<endl;
			break;
		}
	}
	return 0;
}
