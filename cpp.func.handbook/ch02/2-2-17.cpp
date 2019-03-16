#include<iostream.h>
#include<time.h>

int main()
{
    char buf[10];
	cout<<"the current date is:"<<_strtime(buf)<<endl;
    cout<<buf;
	return 0;
}
