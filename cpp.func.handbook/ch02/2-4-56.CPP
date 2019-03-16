#include<stdio.h>
#include<string.h>

int main()
{
	char far *src="This is a test";
	char dest[40];
	_fstrncpy(dest,src,20);
	printf("%s\n",dest);
	return 1;
}
