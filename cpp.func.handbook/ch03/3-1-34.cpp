#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *stream;
	char str[20];
    stream=fopen("temp2.txt","w");   //��ֻд�ķ�ʽ���ļ�temp2.txt
	size_t num;
	num=fread(str,10,1,stream);
	cout<<"There "<<num<<" items are read"<<endl;
	fclose(stream);             //�ر��ļ�
	return 0;
}
