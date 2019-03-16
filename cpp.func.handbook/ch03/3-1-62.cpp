#include<iostream.h>
#include<stdio.h>

int main()
{
    FILE *stream;
	int w;
	w=10;
	stream=fopen("temp2.txt","w");           //以只读方工打开文件temp.txt
    if(putw(w,stream)!=EOF)
		cout<<"Success to put w to temp2.txt!"<<endl;
	else 
		cout<<"Some error occur!"<<endl;
	fclose(stream);        //关闭文件
	return 0;
}
