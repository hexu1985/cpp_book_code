#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *stream;
	char *str="This is an example of fputchar";
    int i;
	for(i=0;i<strlen(str);i++)fputchar(str[i]);
	cout<<endl;
	return 0;
}
