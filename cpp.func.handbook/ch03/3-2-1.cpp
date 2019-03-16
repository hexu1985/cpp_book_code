#include<bios.h>
#include<iostream.h>

int main()
{
    bioscom(0,0x02,21);
	cout<<1;
	return 0;
}