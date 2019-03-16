#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>

int func()
{
	cout<<"This is the end of the program!"<<endl;
	return 0;
}

int main()
{
    _onexit(func);
	return 0;
}
