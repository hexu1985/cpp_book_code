#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *string,*endptr;
 string="+1234.5678e-1ee";
	cout<<"the string to be converted is:"<<string<<endl;
	cout<<"the result is:"<<strtod(string,&endptr)<<endl;
	cout<<"the remaining is:"<<endptr<<endl;
 return 0;
}
