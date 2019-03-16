#include<iostream.h>
#include<stdlib.h>

int main()
{
    int value,radix;
	char string[15];
    value=1234;
	radix=2;
	cout<<"Integer "<<value<<" after convert in base"<<radix
		<<" is: "<<itoa(value,string,radix)<<endl;
	value=-1234;
	radix=10;
	cout<<"Integer "<<value<<" after convert in base"<<radix
		<<" is: "<<itoa(value,string,radix)<<endl;
	return 0;
}
