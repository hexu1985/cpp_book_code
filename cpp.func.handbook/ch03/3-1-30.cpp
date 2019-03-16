#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *stream;
	char str[20]="This is an example";
    stream=fopen("temp2.txt","w");   //以只写的方式打开文件temp.txt
	int num;
	num=fprintf(stream,str);
	cout<<"There "<<num<<"bits send to the file temp2.txt"<<endl;
	fclose(stream);             //关闭文件
	return 0;
}
