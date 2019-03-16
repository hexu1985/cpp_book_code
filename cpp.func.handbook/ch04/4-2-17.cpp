#include<iostream.h>
#include<stdio.h>
#include<time.h>

int main()
{
	char env[20]="TZ=PST8PDT";
	cout<<"If set "<<env<<"then the time is:"<<endl;
    tzset();
    cout<<"daylight = "<<daylight<<endl;
    cout<<"timezone = "<<timezone<<endl;
    cout<<"tzname[0] = "<<tzname[0]<<endl;
	return 0;
}
