#include<iostream.h>
#include<stdio.h>

int main()
{
    FILE *stream;
	int w;
	w=10;
	stream=fopen("temp2.txt","w");           //��ֻ���������ļ�temp.txt
    if(putw(w,stream)!=EOF)
		cout<<"Success to put w to temp2.txt!"<<endl;
	else 
		cout<<"Some error occur!"<<endl;
	fclose(stream);        //�ر��ļ�
	return 0;
}
