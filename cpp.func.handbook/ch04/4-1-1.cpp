#include<iostream.h>
#include<stdlib.h>

int main()
{
	char *str;
	long len=1000000000;
	str=(char *)malloc(sizeof(str)*len);
	if(!str)
	{
		cout<<"Not enough space!"<<endl;
		abort();
	}
	else
	{
		cout<<"Success!"<<endl;
		free(str);
	}
	return 0;
}
