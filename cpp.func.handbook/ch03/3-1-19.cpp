#include<iostream.h>
#include<stdio.h>

int main()
{
  FILE *stream;
  char str[20];
  stream=fopen("temp.txt","r");     //打开一个temp.txt的文件
  fgets(str,5,stream);             //从stream中读取5个字符
  if(feof(stream))               //当达到文件的结尾时
	  cout<<"Reached the end of the file temp.txt"<<endl;
  else                        //没达到文件的结尾时
	  cout<<"Hasn't reached the end of the file temp.txt"<<endl;
  return 0;
}
