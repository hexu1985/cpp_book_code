#include<iostream.h>
#include<time.h>

int main()
{
    char buf[10];
	_strtime(buf);
	cout<<"The time now is: "<<buf<<endl;
	return 0;
}
