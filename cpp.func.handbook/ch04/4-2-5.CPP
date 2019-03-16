#include<iostream.h>
#include<dos.h>

int main()
{
    date d;
    time t;
	long unix_time;
	getdate(&d);
	gettime(&t);
    unix_time=dostounix(&d,&t);
	cout<<"Its has passed "<<unix_time<<" seconds since 1970";
	return 0;
}
