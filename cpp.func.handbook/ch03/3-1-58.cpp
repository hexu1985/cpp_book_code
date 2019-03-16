#include<iostream.h>
#include<stdio.h>

int main()
{
	char c;
	FILE *stream;
	c='a';
	stream=fopen("temp2.txt","w");
	int result;
	result=putc(c,stream);
	if(result!=EOF)
		cout<<"Success to put a character to the file"<<endl;
	else
		cout<<"Some error occur!"<<endl;
	fclose(stream);
	return 0;
}