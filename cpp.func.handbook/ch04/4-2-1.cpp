#include<iostream.h>
#include<time.h>

int main()
{
    struct tm time;
	time.tm_hour=1;
    time.tm_isdst=0;
    time.tm_mday=1;
    time.tm_min=1;
    time.tm_mon=1;
    time.tm_sec=1;
    time.tm_wday=1;
    time.tm_yday=1;
    time.tm_year=102;
    cout<<"The time is:"<<asctime(&time);
	return 0;
}
