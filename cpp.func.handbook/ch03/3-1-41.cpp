#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *stream;
	char str[20]="This is a test";
    stream=fopen("temp2.txt","w");   //以只写的方式打开文件temp2.txt，temp2里不含任何内容 
	size_t num;
	num=fwrite(str,strlen(str),1,stream);       //让数据添加到流stream中
	cout<<"There "<<num<<" items are writed"<<endl;    //显示写入的数据的个数
	fclose(stream);             //关闭文件
	return 0;
}
