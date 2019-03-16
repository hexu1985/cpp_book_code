#include<iostream.h>
#include<stdlib.h>

int main()
{
	double value;
	int ndec=2;
	char buf[15];
    value=-122.345;
	cout<<"value = "<<value<<endl;
	gcvt(value,ndec,buf);
    cout<<"buf = "<<buf<<endl;
	return 0;
}
