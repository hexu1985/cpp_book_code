#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *stream;
	char str[20]="This is a test";
    stream=fopen("temp2.txt","w");   //��ֻд�ķ�ʽ���ļ�temp2.txt��temp2�ﲻ���κ����� 
	size_t num;
	num=fwrite(str,strlen(str),1,stream);       //��������ӵ���stream��
	cout<<"There "<<num<<" items are writed"<<endl;    //��ʾд������ݵĸ���
	fclose(stream);             //�ر��ļ�
	return 0;
}
