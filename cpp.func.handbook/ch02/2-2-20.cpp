#include<iostream.h>
#include<ctype.h>

int main()
{
	int c;
    c=toascii('a');
	cout<<"convert "<<c<<" to "<<_toupper(c)<<endl;
    c=toascii('A');
	cout<<"convert "<<c<<" to "<<_toupper(c)<<endl;
    return 0;
}
