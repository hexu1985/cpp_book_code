#include<iostream.h>
#include<stdlib.h>

int main()
{
    long value;
    int radix;
    char string[30];
    value=1234567;
	radix=2;
	cout<<"Integer "<<value<<" after conver in base"<<radix
		<<" is: "<<itoa(value,string,radix)<<endl;
	value=-1234567;
	radix=10;
	cout<<"Integer "<<value<<" after conver in base"<<radix
		<<" is: "<<itoa(value,string,radix)<<endl;
	return 0;
}
