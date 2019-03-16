#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *stream;
	char str[20];
    stream=fopen("temp2.txt","w");   //以只写的方式打开文件temp2.txt
	size_t num;
	num=fread(str,10,1,stream);
	cout<<"There "<<num<<" items are read"<<endl;
	fclose(stream);             //关闭文件
	return 0;
}
