#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *stream;
	char str[20]="This is an example";
    stream=fopen("temp2.txt","w");   //��ֻд�ķ�ʽ���ļ�temp.txt
	int num;
	num=fprintf(stream,str);
	cout<<"There "<<num<<"bits send to the file temp2.txt"<<endl;
	fclose(stream);             //�ر��ļ�
	return 0;
}
