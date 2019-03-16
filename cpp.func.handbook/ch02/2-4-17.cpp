#include<iostream.h>
#include<string.h>

int main()
{
	char *src="This is a test";
	char dest[40];
	strcpy(dest,src);
	cout<<dest<<endl;
	return 0;
}
