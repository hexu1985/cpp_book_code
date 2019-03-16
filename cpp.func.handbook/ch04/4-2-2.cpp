#include<iostream.h>
#include<time.h>

int main()
{
	while(1)
	{
		if(clock()/CLK_TCK>=1)           //当经过了1秒，从while语句中跳出。
		{
			cout<<"It has passed 1 seconds!"<<endl;
			break;
		}
	}
	return 0;
}
