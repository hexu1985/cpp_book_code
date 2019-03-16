#include<stdio.h>
#include<string.h>

int main()
{
	char dest[40]="This is an example";
	char far *src=" of _fstrncat";
	printf("%s\n",_fstrncat(dest,src,_fstrlen(src)));
	return 1;
}
