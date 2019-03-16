#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *string,*endptr;
	int radix;
    string="1.23e-1";
	radix=8;
	cout<<"the string to be converted is:"<<string<<endl;
	cout<<"the result in base "<<radix<<" is:"<<strtoul(string,&endptr,radix)<<endl;
	cout<<"the remaining is:"<<endptr<<endl;
}
