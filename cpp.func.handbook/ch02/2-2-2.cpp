#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *string;
 string="12e2";
	cout<<string<<"="<<atoi(string)<<endl;
	string="-1";
	cout<<string<<"="<<atoi(string)<<endl;
	return 0;
}
