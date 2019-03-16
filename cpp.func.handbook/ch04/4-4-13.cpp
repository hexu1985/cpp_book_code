#include<iostream.h>
#include<signal.h>
#define sig 2

void func(int sign)
{
	cout<<"This is a program to handle the sigle "<<sign<<endl;
}

int main()
{
  signal(sig,func);
  raise(sig);
  return 0;
}
