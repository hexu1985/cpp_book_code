#include<iostream.h>
#include<string.h>

int main()
{
	char dest[40]="This is an example";
	char *src=" of strcat";
	cout<<strcat(dest,src)<<endl;
	return 0;
}
