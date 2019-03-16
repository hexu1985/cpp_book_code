#include<iostream.h>
#include<time.h>

int main()
{
    time_t t1,t2;
	time(&t1);
	while(1)
	{
	    time(&t2);
		if(difftime(t2,t1)>=1)
		{
			cout<<"It has passed 1 seconds!"<<endl;
			break;
		}
	}
	return 0;
}
