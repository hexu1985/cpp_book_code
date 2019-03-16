#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *stream;
	char c='a';
    stream=fopen("temp2.txt","w");   //以只写的方式打开文件temp2.txt
	int ch;
	ch=fputc(c,stream);               //将字符c写入文件temp2.txt中去
	if(ch!=EOF)                    //成功时
		cout<<"Success to sent to the file temp2.txt"<<endl;
	else                         //失败时
		cout<<"Fail to sent to the file temp2.txt"<<endl;
	fclose(stream);             //关闭文件
	return 0;
}
