#include<stdio.h>
#include<string.h>

int main()
{
	char dest[40]="This is an example";
	char far *src=" of _fstrcat";
	printf("%s",_fstrcat(dest,src));
	return 0;
}
