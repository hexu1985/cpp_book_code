#include<iostream.h>
#include<string.h>

int main()
{
	char dest[40]="This is an example";
	char *src=" of strncat";
	cout<<strncat(dest,src,strlen(src))<<endl;
	return 0;
}
