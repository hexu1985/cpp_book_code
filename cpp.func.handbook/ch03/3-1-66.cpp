#include<iostream.h>
#include<stdio.h>

int main()
{
    FILE *stream;
	char str[20];
	int len=10;
	stream=fopen("temp.txt","r");
	fgetc(stream);
	fgets(str,len,stream); 
	cout<<"The str is:"<<str<<endl;
	rewind(stream);
	fgets(str,len,stream);
	cout<<"After rewind the str is:"<<str<<endl;
	fclose(stream);
	return 0;
}
