#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *string;
  string="-2e-2";
	cout<<string<<"="<<atof(string)<<endl;
	string="+1";
	cout<<string<<"="<<atof(string)<<endl;
	return 0;
}
