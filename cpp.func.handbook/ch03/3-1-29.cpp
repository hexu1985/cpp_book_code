#include<iostream.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	char str[20];
    fp=fopen("temp.txt","r");   //以只读的方式打开文件temp.txt
	fgets(str,10,fp);           //从文件中读取10个字符
	cout<<str<<endl;         //输出str的内容
	fclose(fp);             //关闭文件
	return 0;
}