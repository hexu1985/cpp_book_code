#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	char str[20];
    fp=fopen("temp.txt","r");   //��ֻ���ķ�ʽ���ļ�temp.txt
	fgets(str,10,fp);           //���ļ��ж�ȡ10���ַ�
	cout<<str<<endl;         //���str������
	fclose(fp);             //�ر��ļ�
	return 0;
}