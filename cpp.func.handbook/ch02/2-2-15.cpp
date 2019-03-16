#include<iostream.h>
#include<stdlib.h>

int main()
{
    int value,radix;
	char string[15];
    value=321;
	radix=10;
	cout<<"Integer "<<value<<" after convert in base"<<radix
		<<" is: "<<ultoa(value,string,radix)<<endl;
	return 0;
}
