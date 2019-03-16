#include<iostream.h>
#include<string.h>

int main()
{
	char *src="This is a test";
	char dest[40];
	stpcpy(dest,src);
	cout<<dest<<endl;
	return 0;
}
