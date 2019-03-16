#include<iostream.h>
#include<stdio.h>
#include<time.h>

int main()
{
	time_t timer;
	time(&timer);
	cout<<"There "<<timer<<" seconds has passed since 1970"<<endl;
	return 0;
}
