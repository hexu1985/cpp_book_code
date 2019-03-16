#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *string;
 string="123e2";
	cout<<string<<"="<<atol(string)<<endl;
	string="-1234567";
	cout<<string<<"="<<atol(string)<<endl;
	return 0;
}
