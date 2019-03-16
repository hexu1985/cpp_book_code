#include<iostream.h>
#include<time.h>

int main()
{
    time_t t;
	time(&t);
    cout<<"The time now is:"<<ctime(&t);
	return 0;
}
