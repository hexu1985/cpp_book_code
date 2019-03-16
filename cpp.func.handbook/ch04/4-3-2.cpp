#include<iostream.h>
#include<stdio.h>
#include<io.h>

int main()
{
    FILE *fp;
	char *string="The file can't be open";
	fp=fopen("perror.txt","r");                 //以只读的方式打开一个文件perror..txt(它实际中不存在)
 if(!fp)                                //当打开文件出错时
	{
		perror(string);                 //显示出错信息
		cout<<endl;
	}
	else                              //打开文件成功时
	{
	  cout<<"Success to open the file!"<<endl;
	    fclose(fp);
	}
	return 0;
}
