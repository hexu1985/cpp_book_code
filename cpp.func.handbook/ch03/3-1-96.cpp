#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int handle;
	char str[20]="This is a test";
    handle=open("temp2.txt",O_WRONLY);   //��ֻд�ķ�ʽ���ļ�temp2.txt��temp2�ﲻ���κ����� 
	int num;
	num=_write(handle,str,strlen(str));       //��������ӵ���stream��
	if(num!=-1)
        cout<<"There "<<num<<"bits are writed"<<endl;
	else
		cout<<"Some error occur!"<<endl;
	close(handle);             //�ر��ļ�
	return 0;
}
