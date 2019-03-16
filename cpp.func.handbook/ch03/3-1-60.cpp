#include<iostream.h>
#include<stdio.h>

int main()
{
    FILE *fp;
	char c;
	fp=fopen("temp.txt","r");
    c=fgetc(fp);
	printf("The first character in temp.txt is: ");
	putchar(c);
	cout<<endl;
	fclose(fp);
	return 0;
}
