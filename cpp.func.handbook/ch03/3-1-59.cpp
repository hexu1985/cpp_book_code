#include<iostream.h>
#include<stdio.h>

int main()
{
	char c;
	c='a';
    if(putchar(c)!=EOF)
		cout<<endl<<"success!";
	else 
		cout<<"fail!"<<endl;
	return 0;
}
