#include<iostream.h>
#include<stdio.h>
#include<io.h>

int main()
{
    FILE *fp;
	char *string="The file can't be open";
	fp=fopen("perror.txt","r");                 //��ֻ���ķ�ʽ��һ���ļ�perror..txt(��ʵ���в�����)
 if(!fp)                                //�����ļ�����ʱ
	{
		perror(string);                 //��ʾ������Ϣ
		cout<<endl;
	}
	else                              //���ļ��ɹ�ʱ
	{
	  cout<<"Success to open the file!"<<endl;
	    fclose(fp);
	}
	return 0;
}
