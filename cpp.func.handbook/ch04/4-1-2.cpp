#include<iostream.h>
#include<stdlib.h>

void func()
{
	cout<<"This is the end of the program!"<<endl;
}

int main()
{
    atexit(func);
	return 0;
}
