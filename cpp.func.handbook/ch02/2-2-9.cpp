#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *string,*endptr;
  string="+12.34e-2ee";
	cout<<"the string to be converted is:"<<string<<endl;
	cout<<"the result is:"<<_strtold(string,&endptr)<<endl;
	cout<<"the remaining is:"<<endptr<<endl;
  return 0;
}
