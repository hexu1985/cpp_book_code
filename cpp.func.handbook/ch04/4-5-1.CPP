#include<iostream.h>
#include<dir.h>

int main()
{
	char dir[30];
	getcurdir(0,dir);
	cout<<"Now the current directory is: "<<dir<<endl;
    chdir("\\");
	getcurdir(0,dir);
	cout<<"Now the current directory is: "<<dir<<endl; 
	return 0;
}