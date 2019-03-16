#include<iostream.h>
#include<stdio.h>
#include<io.h>

int main()
{
	int handle;
	handle=fileno(stdin);
    if(isatty(handle))
		cout<<"The stdin is the character device"<<endl;
	else 
        cout<<"The stdin is not the character device"<<endl;
	return 0;
}
