#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *stream;
	char c='a';
    stream=fopen("temp2.txt","w");   //��ֻд�ķ�ʽ���ļ�temp2.txt
	int ch;
	ch=fputc(c,stream);               //���ַ�cд���ļ�temp2.txt��ȥ
	if(ch!=EOF)                    //�ɹ�ʱ
		cout<<"Success to sent to the file temp2.txt"<<endl;
	else                         //ʧ��ʱ
		cout<<"Fail to sent to the file temp2.txt"<<endl;
	fclose(stream);             //�ر��ļ�
	return 0;
}
