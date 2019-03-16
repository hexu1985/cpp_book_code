#include<iostream.h>
#include<time.h>

int main()
{
    time_t now;
	tm *timep;
	char str[100];
	time(&now);
	timep=gmtime(&now);
	strftime(str,100,"date:%x\ntime:%X",timep);
	cout<<str;
	return 0;
}
