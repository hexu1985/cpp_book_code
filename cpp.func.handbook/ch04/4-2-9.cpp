#include<iostream.h>
#include<time.h>

int main()
{
    time_t now;
	tm *t;
	now=time(NULL);
    t=gmtime(&now);
    cout<<"Now is year "<<t->tm_year<<endl;
	cout<<"month "<<t->tm_mon<<endl;
	cout<<"day "<<t->tm_mday<<endl;
    return 0;
}
