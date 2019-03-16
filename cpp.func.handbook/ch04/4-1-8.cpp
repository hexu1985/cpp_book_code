#include<iostream.h>
#include<stdlib.h>

int main()
{
    
	putenv("NEWENV=c:\\newenv;");
	cout<<"NEWENV= ";
	cout<<getenv("NEWENV")<<endl;
	return 0;
}
