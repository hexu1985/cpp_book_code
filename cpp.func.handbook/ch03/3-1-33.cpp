#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *stream;
	char *string="This is a test";
    stream=fopen("temp2.txt","w");   //以只写的方式打开文件temp2.txt
	char ch;
	ch=fputs(string,stream);               //将字符c写入文件temp2.txt中去
	if(ch!=EOF)                    //成功时
	{
		cout<<"Success to sent to the file temp2.txt"<<endl;
		cout<<"The last characters sent to the file is:"<<ch<<endl;
	}
	else                         //失败时
		cout<<"Fail to sent to the file temp2.txt"<<endl;
	fclose(stream);             //关闭文件
	return 0;
}
