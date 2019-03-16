#include<iostream.h>
#include<string.h>

void main(int argc,char **argv)
{
	int i;
	cout<<endl;
	cout<<"This is the child process !"<<endl;
	cout<<"The Parameter is: ";
    char result[100]="";
    for(i=0;i<argc;i++)strcat(result,argv[i]);
	cout<<result<<endl;
}