#include<iostream.h>
#include<dir.h>

int print(int drive)
{
	char ch;
	ch='A'+drive;
	cout<<ch;
	return 0;
}
int main()
{
    int drive;
	drive=getdisk();
	cout<<"The curren drive is :";
	print(drive);
	cout<<endl;
	
	drive++;
    setdisk(drive);
	drive=getdisk();
	cout<<"Now drive is :";
	print(drive);
	cout<<endl;
	
	return 0;
}
