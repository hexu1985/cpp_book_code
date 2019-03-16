#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *string,*endptr;
	int radix;
  string="+1234.5678e-1ee";
	radix=8;
	cout<<"the string to be converted is:"<<string<<endl;
	cout<<"the result in base "<<radix<<" is:"<<strtol(string,&endptr,radix)<<endl;
	cout<<"the remaining is:"<<endptr<<endl;
}
