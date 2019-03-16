#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("temp.txt","r");
	int result;
	result=getw(fp);
    if(result!=EOF)
		cout<<"The result is:"<<result<<endl;
	else
		cout<<"Some error occur!"<<endl;
	return 0;
}
