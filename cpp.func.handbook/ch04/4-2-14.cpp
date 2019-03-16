#include<iostream.h>
#include<stdio.h>
#include<time.h>

int main()
{
	time_t now;
	time(&now);
    if(stime(&now)==0)
		cout<<"There have been "<<now<<" seconds since 1970"<<endl;
	else
		cout<<"Some error occur!"<<endl;
	return 0;
}
