#include<iostream.h>
#include<sys\timeb.h>

int main()
{
    timeb t;
	ftime(&t);
	cout<<"The time is: "<<t.time<<endl;
	return 0;
}
