#include<iostream.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char src[30]="This is an example";
	char dest[30]="Just a test";
	swab(src,dest,4);
	cout<<"src = "<<src<<endl;
	cout<<"dest = "<<dest<<endl;
	return 0;
}
