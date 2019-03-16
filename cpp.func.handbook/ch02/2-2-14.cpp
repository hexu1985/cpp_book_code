#include<iostream.h>
#include<ctype.h>

int main()
{
	int c;
    c=toascii('A');
	cout<<"convert "<<c<<" to "<<toupper(c)<<endl;
    c=toascii('a');
	cout<<"convert "<<c<<" to "<<toupper(c)<<endl;
    return 0;
}
