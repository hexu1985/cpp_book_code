#include<iostream.h>
#include<string.h>

int main()
{
	char *src="This is a test";
	char dest[40];
	strncpy(dest,src,20);
	cout<<dest<<endl;
	return 0;
}
