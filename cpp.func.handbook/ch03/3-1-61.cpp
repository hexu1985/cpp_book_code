#include<iostream.h>
#include<stdio.h>

int main()
{
    FILE *fp;
	char str[20];
	fp=fopen("temp.txt","r");           //以只读方工打开文件temp.txt
    fgets(str,10,fp);                  //读取temp.txt中的字符串
	printf("The contents in temp.txt is: ");
	puts(str);             //往stdout中输出字符串str
	fclose(fp);        //关闭文件
	return 0;
}
