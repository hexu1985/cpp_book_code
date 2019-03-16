#include<iostream.h>
#include<time.h>

int main()
{
    char buf[10];
	cout<<"the current date is:"<<_strdate(buf)<<endl;
    cout<<buf;
	return 0;
}
