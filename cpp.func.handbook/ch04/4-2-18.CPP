#include<iostream.h>
#include<stdio.h>
#include<dos.h>

int main()
{
    date d;
    time t;
	long time;
    time=10387599;
	unixtodos(time,&d,&t);
	printf("hour= %d\n",t.ti_hour);
	printf("minute= %d\n",t.ti_min);
	return 0;
}
