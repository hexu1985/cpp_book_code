#include<iostream.h>
#include<string.h>

int main()
{
	char *src="This is a test";
	char dest[40];
	movmem(src,&dest,strlen(src)+1);
	cout<<dest<<endl;
	return 0;
}
